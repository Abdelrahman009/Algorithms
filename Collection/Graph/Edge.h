
#ifndef ALGORITHMS_EDGE_H
#define ALGORITHMS_EDGE_H

#include "Vertex.h"


class Edge{
public:
    int source;
    int destination;
    double weight;


    bool operator>(Edge const  &e1) const {
        return weight>e1.weight;
    }
    bool operator<(Edge const  &e1) const {
        return weight<e1.weight;
    }
};


#endif