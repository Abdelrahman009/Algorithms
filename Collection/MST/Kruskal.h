#ifndef ALGORITHMS_KRUSKAL_H
#define ALGORITHMS_KRUSKAL_H

#include <iostream>
#include "../Graph/UnDirectedGraph.h"
#include <algorithm>
using namespace std;

class Kruskal {
public:
    vector<Edge> findMST(UnDirectedGraph &graph);
};


#endif