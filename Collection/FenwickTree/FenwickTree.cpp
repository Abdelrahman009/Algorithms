//
// Created by abdelrahman on 18/07/18.
//

#include "FenwickTree.h"


void FenwickTree::buildTree(vector<double> &arr) {
    array = arr;
    tree.clear();
    for (int i = 0; i <= arr.size() ; ++i) {
        tree.push_back(0);
    }
    for (int i = 1; i < tree.size() ; ++i) {
        int index = i;
        do{
            tree[index] += arr[i-1];
            index = next(index);
        }while(index < tree.size());
    }
}
void FenwickTree::update(int index, double newValue){
    double diff = newValue - array[index];
    do{
        tree[index] += diff;
        index = next(index);
    }while(index < tree.size());
}
double FenwickTree::getSum(int startIndex,int endIndex){
    int index = endIndex + 1;
    double sum = 0;
    while(index > 0){
        sum +=tree[index];
        index = parent(index);
    }
    index = startIndex;
    while(index > 0){
        sum -=tree[index];
        index = parent(index);
    }
    return sum;
}


int FenwickTree::next(int index) {
    return (index&(-index)) + index;
}

int FenwickTree::parent(int index){
    return - (index&(-index)) + index;
}