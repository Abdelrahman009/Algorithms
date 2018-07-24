
#ifndef ALGORITHMS_GRAPH_H
#define ALGORITHMS_GRAPH_H


#include "Vertex.h"

class Graph {
public:
    vector<Vertex> vertices;
    vector<Edge> edges;
    virtual void addEdge(int v,int u, double weigth) = 0;
    virtual void addVertex(double value,string name) = 0;

};


#endif