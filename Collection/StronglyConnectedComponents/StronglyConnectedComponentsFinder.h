#ifndef ALGORITHMS_STRONGLYCONNECTEDCOMPONENTSFINDER_H
#define ALGORITHMS_STRONGLYCONNECTEDCOMPONENTSFINDER_H

#include <iostream>
#include <vector>
#include "../Graph/DirectedGraph.h"

using namespace std;

class StronglyConnectedComponentsFinder {
public:
    vector<vector<Vertex>> findSCC(DirectedGraph graph);
};


#endif