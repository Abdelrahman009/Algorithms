
#ifndef ALGORITHMS_MEDIANOFWEIGHTSELECTOR_H
#define ALGORITHMS_MEDIANOFWEIGHTSELECTOR_H

#include <iostream>
#include <vector>

using namespace std;
class MedianOfWeightSelector {
public:
    double findMedianOfWeight(vector<double> &numbers);

private:
    double specializedPartition(vector<double> &collection,int startIndex , int endIndex,double sumLeft, double sumRight);
};


#endif