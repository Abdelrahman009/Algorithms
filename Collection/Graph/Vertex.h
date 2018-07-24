#ifndef ALGORITHMS_VERTEX_H
#define ALGORITHMS_VERTEX_H

#include <iostream>
#include <vector>
#include "Edge.h"

using namespace std;


class Vertex{
public:
    vector<Edge> edges;
    double value;
    string name;
    int index;
    int color;
    int parent;

    //DFS AND BFS
    double discoveryTime;
    int finishingTime;

    bool operator>(Vertex const  &v2) const {
        return discoveryTime > v2.discoveryTime;
    }

    bool operator<( Vertex const &v2) const {
        return discoveryTime < v2.discoveryTime;
    }
};

#endif