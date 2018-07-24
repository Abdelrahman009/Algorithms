
#include "DirectedGraph.h"


void DirectedGraph::addEdge(int v,int u, double weigth){
    Edge* e = new Edge();
    e->weight = weigth;
    e->destination = u;
    e->source =v;
    edges.push_back(*e);
    vertices[v].edges.push_back(*e);
}
void DirectedGraph::addVertex(double value,string name){
    Vertex *v = new Vertex();
    v->index = (int)(vertices.size());
    v->name = name;
    v->value = value;
    vertices.push_back(*v);
}