#ifndef ALGORITHMS_DIRECTEDGRAPH_H
#define ALGORITHMS_DIRECTEDGRAPH_H


#include "Vertex.h"
#include "Graph.h"

class DirectedGraph : public Graph{
public:
    void addEdge(int v,int u, double weigth);
    void addVertex(double value,string name);

};


#endif