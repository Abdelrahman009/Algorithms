
#ifndef ALGORITHMS_DISJOINTSETS_H
#define ALGORITHMS_DISJOINTSETS_H

#include <iostream>
#include <vector>

using namespace std;
class DisjointSets {

private:
    vector<int> id;
    vector<int> rank;
public:
    int find(int v);
    int unionVetices(int u, int v);
    int makeSets(int size);
    vector<int> getid(){
        return id;
    }

};


#endif