//
// Created by abdelrahman on 25/06/18.
//

#include "MedianOfWeightSelector.h"


double MedianOfWeightSelector::findMedianOfWeight(vector<double > &numbers){
    double sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
    }
    return specializedPartition(numbers,0,numbers.size()-1,sum/2,sum/2);



}
void swap(vector<double > &collection, int i, int j) {
    if(i != j) {
        collection[i] += collection[j];
        collection[j] = collection[i] - collection[j];
        collection[i] -= collection[j];
    }
}

double MedianOfWeightSelector::specializedPartition(vector<double > &collection,
                                                       int startIndex , int endIndex, double sumLeft,
                                                    double sumRight ){


    double pivotValue = collection[startIndex];
    int i = startIndex;
    int j = startIndex+1;
    double sumLess = 0;
    double sumGreater = 0;
    while(j<= endIndex) {
        int tmp = collection[j];
        if(collection[j] <= pivotValue){
            i++;
            sumLess += collection[j];
            swap(collection,i,j);
        } else {
            sumGreater += collection[j];
        }
        j++;
    }
    swap(collection,i,startIndex);

    if(sumLess <= sumLeft) {
        if (sumGreater < sumRight){
            return collection[i];
        } else {
            sumLeft -= (sumLess + collection[i]);
            return specializedPartition(collection,i+1,endIndex,sumLeft,sumRight);
        }
    } else {
        sumRight -= (sumGreater + collection[i]);
        return specializedPartition(collection,startIndex,i-1,sumLeft,sumRight);
    }

}





