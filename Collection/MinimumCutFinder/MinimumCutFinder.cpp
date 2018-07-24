#include <tgmath.h>
#include "MinimumCutFinder.h"

int MinimumCutFinder::findMinimumCut(UnDirectedGraph graph){
    long long size = graph.vertices.size();
    long long limit = size*size*log(size)*2;//prop O(1/n^2) wrong
    int min = INT32_MAX;
    for (long long i = 0; i < limit; ++i) {
        int cutCount = contractor.findMinCut(graph);
        if(cutCount < min){
            min = cutCount;
        }
    }


    return min;
}