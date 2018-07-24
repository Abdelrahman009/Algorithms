#include "Selector.h"


long long Selector::select(vector<long long> &collection,int startIndex , int endIndex,int position) {
    int index = partition(collection,startIndex,endIndex);
    if(index == position)
        return collection[index];
    else if (index > position){
        return select(collection,startIndex,index - 1,position);
    } else {
        return select(collection,index + 1, endIndex,position);
    }
}



int Selector::partition(vector<long long> &collection,int startIndex , int endIndex){
    int pivot =  rand()%(endIndex- startIndex + 1) + startIndex;
    swap(collection,pivot,endIndex);
    long long pivotValue = collection[endIndex];
    int i = startIndex - 1;
    int j = startIndex;

    while(j< endIndex) {
        if(collection[j] <= pivotValue){
            i++;
            swap(collection,i,j);
        }
        j++;
    }
    i++;
    swap(collection,i,endIndex);
    return i;
}

void Selector::swap(vector<long long> &collection, int i, int j) {
    if(i != j) {
        collection[i] += collection[j];
        collection[j] = collection[i] - collection[j];
        collection[i] -= collection[j];
    }
}