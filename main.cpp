#include<iostream>
#include<algorithm>
#include "Collection/FenwickTree/FenwickTree.h"

using namespace std;

int main() {
    vector<double> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(9);
    nums.push_back(10);


    FenwickTree tree;

    tree.buildTree(nums);

    for (int i = 0; i < 10; ++i) {

        cout<<tree.getSum(0,i)<<"\n";
    }

    tree.update(5,5);

    for (int i = 0; i < 10; ++i) {

        cout<<tree.getSum(0,i)<<"\n";
    }

    return 0;
}