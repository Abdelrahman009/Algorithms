#ifndef ALGORITHMS_DFSOPERATOR_H
#define ALGORITHMS_DFSOPERATOR_H


#include "../Graph/Vertex.h"
#include "../Graph/DirectedGraph.h"

class DFSOperator {
public:
    vector<Vertex> operateDFS(DirectedGraph &graph);
private:
    vector<Vertex> orderedNodes;
    int time;
    void DFS(DirectedGraph &graph,Vertex &v);
};

#endif //ALGORITHMS_DFSOPERATOR_H
