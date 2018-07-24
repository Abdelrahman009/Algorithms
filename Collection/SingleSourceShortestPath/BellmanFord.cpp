
#include "BellmanFord.h"




bool BellmanFord::findShortestPaths(DirectedGraph &graph){


    for (int j = 0; j < graph.vertices.size(); ++j) {
        graph.vertices[j].discoveryTime = INT32_MAX;
        graph.vertices[j].finishingTime = 0;
        graph.vertices[j].parent = -1;
    }
    graph.vertices[0].discoveryTime = 0;
    for (int i = 0; i < graph.vertices.size() - 1; ++i) {
        for (int j = 0; j < graph.edges.size(); ++j) {
            Relax(graph,graph.edges[j]);
        }
    }

    for (int j = 0; j < graph.edges.size(); ++j) {
        if(Relax(graph,graph.edges[j]));
          return false;
    }
    return true;


}

bool BellmanFord::Relax(DirectedGraph &g,Edge e){
    if (g.vertices[e.destination].discoveryTime > g.vertices[e.source].discoveryTime + e.weight){
        g.vertices[e.destination].discoveryTime = g.vertices[e.source].discoveryTime + e.weight;
        g.vertices[e.destination].parent = e.source;
        return true;
    }
    return false;
}