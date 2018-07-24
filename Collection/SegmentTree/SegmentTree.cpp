#include "SegmentTree.h"

void SegmentTree::buildSegmentTree(vector<double> arr) {
    size = arr.size();
    long long tmp = 1;




    while(tmp < size ) {
        tmp = tmp<<1;
    }



    segment.clear();
    tmp = 2*tmp -1;
    for (long long i = 0; i < tmp; ++i) {
        segment.push_back(INT64_MAX);
    }
    constructTree(arr,0,size-1,0);
}


double SegmentTree::query(int low,int high) {
    return performQuery(low,high,0,size-1,0);
}

void SegmentTree::constructTree(vector<double> &arr,int low,int high,int pos) {

    if(low == high) {
        segment[pos] = arr[high];
        return;
    }
    int mid = (high + low)/2;
    constructTree(arr,low,mid,2*pos + 1);
    constructTree(arr,mid+1,high,2*pos + 2);
    segment[pos] = (segment[2*pos+1] < segment[2*pos +2])? segment[2*pos+1]:segment[2*pos+2] ;

}

double SegmentTree::performQuery(int queryLow,int queryHigh,int low,int high,int pos) {
    if(low > queryHigh || high < queryLow) {
        return INT64_MAX;
    } else if (low >= queryLow && high <= queryHigh) {
        return segment[pos];
    } else {
        int mid = (low+high)/2;
        double tmp1 = performQuery(queryLow,queryHigh,low,mid,2*pos+1);
        double tmp2 = performQuery(queryLow,queryHigh,mid+1,high,2*pos+2);
        if(tmp1 > tmp2)
            return tmp2;
        return tmp1;
    }
}