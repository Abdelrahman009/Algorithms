#include <algorithm>
#include "QuickSortEngine.h"



long long QuickSortEngine::sort(vector<long long> &collection,int startIndex , int endIndex) {
    if(startIndex < endIndex){
        int index = partition(collection,startIndex,endIndex);
        sort(collection,startIndex,index - 1);
        sort(collection,index + 1 , endIndex);
    }
}



int QuickSortEngine::partition(vector<long long> &collection,int startIndex , int endIndex){
//    int pivot =  rand()%(endIndex- startIndex + 1) + startIndex;
//    swap(collection,pivot,endIndex);

    /**
     * code to interchange
     *swap(collection,startIndex,endIndex);
    */

    /**
     * code to median of three
     *
    */
    //swap(collection,startIndex,endIndex);
    swap(collection,startIndex,medianOfThree(collection,startIndex,endIndex));

    long long pivotValue = collection[startIndex];
    int i = startIndex;
    int j = startIndex+1;

    numberOfcomparisons += endIndex - startIndex;
    while(j<= endIndex) {
        if(collection[j] <= pivotValue){
            i++;
            swap(collection,i,j);
        }
        j++;
    }
    swap(collection,i,startIndex);
    return i;
}

void QuickSortEngine::swap(vector<long long> &collection, int i, int j) {
    if(i != j) {
        collection[i] += collection[j];
        collection[j] = collection[i] - collection[j];
        collection[i] -= collection[j];
    }
}

long long QuickSortEngine::medianOfThree(vector<long long> &collection,int startIndex,int endIndex) {

    vector<long long > pivots;
    pivots.push_back(collection[startIndex]);
    pivots.push_back(collection[endIndex]);
    pivots.push_back(collection[(endIndex + startIndex)/2]);
    std::sort(pivots.begin(),pivots.end());
    if(pivots[1] == collection[startIndex]){
        return startIndex;
    } else if(pivots[1] == collection[endIndex]){
        return endIndex;
    } else {
        return (endIndex + startIndex)/2;
    }


}

