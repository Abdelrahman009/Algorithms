//
// Created by abdelrahman on 27/06/18.
//

#ifndef ALGORITHMS_BELLMANFORD_H
#define ALGORITHMS_BELLMANFORD_H


#include "../Graph/DirectedGraph.h"

class BellmanFord {
public:
    bool findShortestPaths(DirectedGraph &graph);

private:
    bool Relax(DirectedGraph &g,Edge e);
};


#endif