
#ifndef ALGORITHMS_UNDIRECTEDGRAPH_H
#define ALGORITHMS_UNDIRECTEDGRAPH_H


#include "Vertex.h"
#include "Graph.h"



class UnDirectedGraph : public Graph{
public:
    void addEdge(int v,int u, double weigth);
    void addVertex(double value,string name);
};


#endif