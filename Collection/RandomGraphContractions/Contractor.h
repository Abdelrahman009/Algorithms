#ifndef ALGORITHMS_CONTRACTOR_H
#define ALGORITHMS_CONTRACTOR_H


#include "../Graph/Graph.h"
#include "../UnionFind/DisjointSets.h"
#include "../Graph/UnDirectedGraph.h"

class Contractor {
private:
    DisjointSets vertices;
public:
    int findMinCut(UnDirectedGraph graph);

};


#endif