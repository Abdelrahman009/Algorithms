

#include "StronglyConnectedComponentsFinder.h"
#include "../DFS/DFSOperator.h"

void DFS(DirectedGraph &graph,vector<Vertex> &component,Vertex &v){
    v.color = 1;
    component.push_back(v);
    for (int i = 0; i < v.edges.size(); ++i) {
        for(Edge e : v.edges){
            if(graph.vertices[e.destination].color == 0 ){
                graph.vertices[e.destination].parent = v.index;
                DFS(graph,component,graph.vertices[e.destination]);
            }
        }
    }
}

vector<vector<Vertex>> StronglyConnectedComponentsFinder::findSCC(DirectedGraph graph){

    DirectedGraph reverseGraph;
    for (int i = 0; i < graph.vertices.size(); ++i) {
        Vertex v;
        v.name = graph.vertices[i].name;
        v.value = graph.vertices[i].value;
        v.index = graph.vertices[i].index;
        reverseGraph.vertices.push_back(v);
    }

    for (int j = 0; j < graph.edges.size(); ++j) {
        reverseGraph.addEdge(graph.edges[j].destination,graph.edges[j].source,graph.edges[j].weight);
    }

    DFSOperator dfsOperator;

    vector<Vertex> vertices = dfsOperator.operateDFS(reverseGraph);

    for (int i = 0; i < graph.vertices.size(); ++i) {
        graph.vertices[i].color = 0;
        graph.vertices[i].parent = -1;
    }

    vector<vector<Vertex>> components;

    for (int k = vertices.size() - 1; k >= 0 ; --k) {

        if(graph.vertices[vertices[k].index].color == 0) {
            vector<Vertex> component;
            DFS(graph, component, graph.vertices[vertices[k].index]);
            components.push_back(component);
        }
    }
    return components;
}
