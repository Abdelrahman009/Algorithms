#ifndef ALGORITHMS_SEGMENTTREE_H
#define ALGORITHMS_SEGMENTTREE_H

#include<iostream>
#include <vector>

using namespace std;


class SegmentTree {
public:
    void buildSegmentTree(vector<double> arr);
    double query(int low,int high);

private:
    vector<double > segment;
    long long size;
    void constructTree(vector<double> &arr,int low,int high,int pos);
    double performQuery(int queryLow, int queryHigh, int low, int high, int pos);
};


#endif