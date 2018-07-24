
#ifndef ALGORITHMS_QUICKSORTENGINE_H
#define ALGORITHMS_QUICKSORTENGINE_H

#include <iostream>
#include <vector>

using namespace std;



class QuickSortEngine {
public:
    long long sort(vector<long long> &collection,int startIndex , int endIndex);
    QuickSortEngine(){
        numberOfcomparisons = 0;
    }
    int numberOfcomparisons;
private:
    int partition(vector<long long> &collection,int startIndex , int endIndex);
    void swap(vector<long long int> &collection, int i, int j);

    long long int medianOfThree(vector<long long int> &collection, int startIndex, int endIndex);
};


#endif