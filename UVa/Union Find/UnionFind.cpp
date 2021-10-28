#include<stdio.h>
#include <cstdio>
#include <vector>
using namespace std;

typedef vector<int> vi;
class UnionFind {                          
private:
  vi p, rank, setSize;
  int numSets;
public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) { 
    if (!isSameSet(i, j)) { numSets--; 
    int x = findSet(i), y = findSet(j);
    if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
    else                   { p[x] = y; setSize[y] += setSize[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
};
int main(){
    int N,Q,y,u,v,x,t;
    scanf("%d %d",&N,&Q);
    UnionFind nodo(N);
    for(x=0;x<Q;x++){
        scanf("%d %d %d",&t,&u,&v);
        if(t==0)
            nodo.unionSet(u, v);
        else{
            printf("%d\n",nodo.isSameSet(u, v));
        }
    }
}