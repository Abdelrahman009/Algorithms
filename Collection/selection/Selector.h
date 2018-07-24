#ifndef ALGORITHMS_SELECTOR_H
#define ALGORITHMS_SELECTOR_H

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
class Selector {
public:
    long long select(vector<long long> &collection,int startIndex , int endIndex,int position);

private:
    int partition(vector<long long> &collection,int startIndex , int endIndex);
    void swap(vector<long long int> &collection, int i, int j);
};


#endif