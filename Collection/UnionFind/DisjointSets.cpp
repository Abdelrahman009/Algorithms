#include "DisjointSets.h"
int DisjointSets::find(int v){
    while (id[v] != v){
        id[v] = id[id[v]];
        v = id[v];
    }
    return v;
}
int DisjointSets::unionVetices(int u, int v){
    int uParent = find(u);
    int vParent = find(v);
    if(uParent != vParent){
      if(rank[uParent] > rank[vParent]){
          id[vParent] = uParent;
      } else if(rank[uParent] < rank[vParent]){
          id[uParent] = vParent;
      } else {
          id[vParent] = uParent;
          rank[uParent]++;
      }
    }
}

int DisjointSets::makeSets(int size){
    id.clear();
    rank.clear();
    for(int i = 0 ; i< size;i++) {
        id.push_back(i);
        rank.push_back(1);
    }
}