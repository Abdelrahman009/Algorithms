
#ifndef ALGORITHMS_INVERSIONSCOUNTER_H
#define ALGORITHMS_INVERSIONSCOUNTER_H

#include <iostream>
#include <vector>

using namespace std;

class InversionsCounter {
private:
    vector<long long> tempVector;
    long long countAndMerge(vector<long long> &elements,long long startIndex,long long midIndex, long long endIndex);
public:
    InversionsCounter(long long size){
        tempVector.reserve(size);
    }
    long long countAndMergeSortAlg(vector<long long> &elements,long long startIndex, long long endIndex);
};


#endif