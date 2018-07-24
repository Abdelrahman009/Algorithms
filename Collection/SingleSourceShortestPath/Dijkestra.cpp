//
// Created by abdelrahman on 27/06/18.
//

#include <queue>
#include "Dijkestra.h"

class compare
{
public:
    bool operator () (const Vertex* lhs, const Vertex* rhs) const
    {
        return *lhs>*rhs;
    }
};

void Dijkestra::findShortestPaths(DirectedGraph &graph){
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
                    if (tmp.discoveryTime > u->discoveryTime + e.weight)
                    {
                        tmp.discoveryTime = u->discoveryTime + e.weight;
                        tmp.parent = u->index;
                        pq.push(&tmp);
                    }

                }
            }
        }
    }
}