
#ifndef ALGORITHMS_FENWICKTREE_H
#define ALGORITHMS_FENWICKTREE_H

#include <iostream>
#include <vector>

using namespace std;

class FenwickTree {
private:
    vector<double> tree;
    vector<double> array;
    int next(int index);
    int parent(int index);
public:
    void buildTree(vector<double> &arr);
    void update(int index, double newValue);
    double getSum(int startIndex,int endIndex);

};


#endif