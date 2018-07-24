#include "InversionsCounter.h"



long long InversionsCounter::countAndMergeSortAlg(vector<long long> &elements,long long startIndex, long long endIndex){

    if(startIndex < endIndex){

        long long mid = endIndex + startIndex;
        mid /= 2;

        long long countLeft = countAndMergeSortAlg(elements,startIndex,mid);
        long long countRight = countAndMergeSortAlg(elements,mid + 1, endIndex);
        long long splitInversions = countAndMerge(elements,startIndex,mid,endIndex);
        return  countLeft + countRight + splitInversions;
    }
    return 0;
}


long long InversionsCounter::countAndMerge(vector<long long> &elements,long long startIndex,long long midIndex, long long endIndex){

    for (long long i =startIndex; i <= endIndex ; ++i) {
        tempVector[i] = elements[i];
    }

    long long i = startIndex;
    long long j = midIndex+1;
    long long k = startIndex;
    long long count = 0;


    while(i <= midIndex && j <= endIndex){
        if(tempVector[j] < tempVector[i]){
            count += midIndex + 1 - i;
            elements[k] = tempVector[j];
            j++;
            k++;
        } else {
            elements[k] = tempVector[i];
            i++;
            k++;
        }
    }
    while(i <= midIndex){
        elements[k] = tempVector[i];
        i++;
        k++;
    }
    while(j <= endIndex) {
        elements[k] = tempVector[j];
        j++;
        k++;
    }
    return count;
}