#ifndef ALGORITHMS_MAJORITYELEMENTFINDER_H
#define ALGORITHMS_MAJORITYELEMENTFINDER_H

#include <iostream>
#include <vector>

using namespace std;


class MajorityElementFinder {
public:
    int findTheMajorityNumber(vector<int> numbers);

private:

    int findCandidate(vector<int> numbers);
};


#endif