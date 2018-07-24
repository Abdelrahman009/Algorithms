
#ifndef ALGORITHMS_MINIMUMCUTFINDER_H
#define ALGORITHMS_MINIMUMCUTFINDER_H


#include "../RandomGraphContractions/Contractor.h"

class MinimumCutFinder {
private:
    Contractor contractor;
public:
    int findMinimumCut(UnDirectedGraph graph);
};


#endif //ALGORITHMS_MINIMUMCUTFINDER_H
