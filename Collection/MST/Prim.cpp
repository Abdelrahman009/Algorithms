//
// Created by abdelrahman on 01/07/18.
//

#include "Prim.h"
#include <queue>

class compare
{
public:
    bool operator () (const Vertex* lhs, const Vertex* rhs) const
    {
        return *lhs>*rhs;
    }
};

void Prim::findMST(UnDirectedGraph &graph){
    priority_queue<Vertex*, vector <Vertex*>,compare > pq;
    for (int j = 0; j < graph.vertices.size(); ++j) {
        graph.vertices[j].discoveryTime = INT32_MAX;
        graph.vertices[j].finishingTime = 0;
        graph.vertices[j].parent = -1;

    }
    graph.vertices[0].discoveryTime = 0;
    pq.push(&graph.vertices[0]);
    while (!pq.empty())
    {
        Vertex* u = pq.top();
        pq.pop();
        if(!u->finishingTime) {
            u->finishingTime = 1;
            for (Edge& e : u->edges)
            {
                Vertex& tmp = graph.vertices[e.destination];
                if(!tmp.finishingTime) {
                    if (tmp.discoveryTime > e.weight)
                    {
                        tmp.discoveryTime = e.weight;
                        tmp.parent = u->index;
                        pq.push(&tmp);
                    }

                }
            }
        }
    }
}