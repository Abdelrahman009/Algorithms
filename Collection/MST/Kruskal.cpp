
#include "Kruskal.h"
#include "../UnionFind/DisjointSets.h"


bool compare(Edge &e1,Edge &e2) {
    return e1 < e2;
}


vector<Edge> Kruskal::findMST(UnDirectedGraph &graph){
    sort(graph.edges.begin(),graph.edges.end(),compare);
    DisjointSets sets;
    vector<Edge> result;
    sets.makeSets(graph.vertices.size());
    int count = graph.vertices.size();
    for (int i = 0; i < graph.edges.size() && count > 1; ++i) {
        if(sets.find(graph.edges[i].source)
                != sets.find(graph.edges[i].destination)){

            result.push_back(graph.edges[i]);
            sets.unionVetices(graph.edges[i].source,graph.edges[i].destination);
            count--;
        }
    }
    return result;

}