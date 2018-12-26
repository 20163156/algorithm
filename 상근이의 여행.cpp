/****************************************

\BOJ 9372 상근이의 여행
최소 스패닝 트리 -> 크루스칼 UNION FIND 사용

*****************************************/

#include <iostream>
#include <vector>

using namespace std;
typedef struct kruskal{
  int from;
  int to;
}KS;


bool check;
int find(int u,int parent[]){
  if(u == parent[u])
    return u;
  return parent[u] = find(parent[u],parent);
}
void merge(int u ,int v,int parent[]){
  check = 0;
  u = find(u,parent);
  v = find(v,parent);

  if(u==v)
    return;
  parent[u] = v;
  check = 1;
}
int main(){
  int numTest;
  scanf("%d",&numTest);
  while(numTest--)
  {

    int parent[10002] = {0,};
    vector<KS> edge;

    //country -> vertex   flight-> edge
    int country,flight,res = 0;
    scanf("%d %d",&country,&flight);

    for(int i = 1;i <= country;++i)
    {
      parent[i] = i;
    }

    for(int i = 0;i < flight;++i)
    {
      KS ks;
      scanf("%d %d",&ks.from,&ks.to);
      edge.push_back(ks);
    }

    for(int i = 0;i < flight;++i)
    {
      merge(edge[i].from,edge[i].to,parent);
      if(check) res++;
    }

    printf("%d\n",res);
  }

}
