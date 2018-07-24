#include "MajorityElementFinder.h"

int MajorityElementFinder::findTheMajorityNumber(vector<int> numbers){

    int cand = findCandidate(numbers);
    int size = numbers.size();
    int count = 0;
    for (int i = 0; i < size ; ++i) {
        if(numbers[i] == numbers[cand])
            count++;
    }
    if(count > (double)size/2.0)
        return numbers[cand];
    return -1;
}

int MajorityElementFinder::findCandidate(vector<int> numbers){
    int maxIndex = 0;
    int count = 1;
    for (int i = 1; i < numbers.size(); ++i) {
        if(numbers[i] != numbers[maxIndex])
            count--;
        if(!count) {
            count++;
            maxIndex = i;
        }
    }
    return maxIndex;
}