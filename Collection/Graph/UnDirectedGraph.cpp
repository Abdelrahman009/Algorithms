#include "UnDirectedGraph.h"

void UnDirectedGraph::addEdge(int v,int u, double weigth){
    Edge* e = new Edge();
    e->weight = weigth;
    e->destination = u;
    e->source = v;
    edges.push_back(*e);
    vertices[v].edges.push_back(*e);
    Edge* e2 = new Edge();
    e2->weight = weigth;
    e2->destination = v;
    e->source = u;
    vertices[u].edges.push_back(*e2);
}
void UnDirectedGraph::addVertex(double value,string name){
    Vertex *v = new Vertex();
    v->index = (int)(vertices.size());
    v->name = name;
    v->value = value;
    vertices.push_back(*v);
}