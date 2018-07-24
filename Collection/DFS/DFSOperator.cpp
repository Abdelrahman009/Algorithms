
#include "DFSOperator.h"

vector<Vertex> DFSOperator::operateDFS(DirectedGraph &graph){
    time = 0;
    orderedNodes.clear();
    for (int i = 0; i < graph.vertices.size(); ++i) {
        graph.vertices[i].color = 0;
        graph.vertices[i].parent = -1;
    }

    for (int j = 0; j < graph.vertices.size(); ++j) {
        if(graph.vertices[j].color == 0) {
            DFS(graph,graph.vertices[j]);
        }
    }
    return orderedNodes;
}

void DFSOperator::DFS(DirectedGraph &graph,Vertex &v){
    v.discoveryTime = ++time;
    v.color = 1;
    for (int i = 0; i < v.edges.size(); ++i) {
        for(Edge e : v.edges){
            if(graph.vertices[e.destination].color == 0 ){
                graph.vertices[e.destination].parent = v.index;
                DFS(graph,graph.vertices[e.destination]);
            }
        }
    }
    v.finishingTime = ++time;
    orderedNodes.push_back(v);
}