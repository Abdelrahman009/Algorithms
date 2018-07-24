#include "Contractor.h"
int Contractor::findMinCut(UnDirectedGraph graph){
    int size = graph.vertices.size();
    int edgesCount = graph.edges.size();
    vertices.makeSets(size);
    while (size > 2){
        int e = rand()%edgesCount;
        int index1 = vertices.find(graph.edges[e].source);
        int index2 = vertices.find(graph.edges[e].destination);
        if(index1 == index2)
            continue;
        else {
            size--;
            vertices.unionVetices(index1, index2);
        }
    }
    int cutEdges = 0;
    for (int i=0; i<graph.edges.size(); i++)
    {
        int set1 = vertices.find(graph.edges[i].source);
        int set2 = vertices.find(graph.edges[i].destination);
        if (set1 != set2)
            cutEdges++;
    }
    return cutEdges;
}