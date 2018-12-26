/****************************************

BOJ 2887 행성터널
최소 스패닝 트리 -> 크루스칼 UNION FIND 사용
모든 간선을 추가하면안되고  X,Y,Z좌표를 정렬후 3*VERTEX갯수로 정렬

*****************************************/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

typedef struct Node{
  int num;
  int x,y,z;
}Node;

typedef struct kruskal{
  int from;
  int to;
  int weight;
}KS;

bool check;
int parent[100002];
vector<KS> edge;
vector<Node> nodes;

bool comp(KS d1, KS d2)
{
    return d1.weight < d2.weight;
}
bool cmpX(Node &a, Node &b)
{
  if (a.x < b.x)
    return true;
  return false;
}
bool cmpY(Node &a, Node &b)
{
  if (a.y < b.y)
    return true;
  return false;
}
bool cmpZ(Node &a, Node &b)
{
  if (a.z < b.z)
    return true;
  return false;
}
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

int min(int num1,int num2,int num3)
{
  if(num1 <= num2 && num1 <= num3)
    return num1;
  else if(num2 <= num1 && num2 <= num3 )
    return num2;
  return num3;
}

int main(){

  int planet;
  long long int res=0;
  scanf("%d",&planet);

  for(int i = 1; i <= planet; ++i)
  {
    parent[i] = i;
  }

  for(int i = 0; i < planet; ++i)
  {
    Node node;
    node.num = i;
    scanf("%d %d %d",&node.x,&node.y,&node.z);
    nodes.push_back(node);
  }
  sort(nodes.begin(), nodes.end(), cmpX);

  for(int i = 1;i < planet;++i){
    KS ks;
    ks.from = nodes[i-1].num;
    ks.to = nodes[i].num;
    ks.weight = min(abs(nodes[i-1].x-nodes[i].x),abs(nodes[i-1].y-nodes[i].y),abs(nodes[i-1].z-nodes[i].z));
    edge.push_back(ks);
  }

  sort(nodes.begin(), nodes.end(), cmpY);

  for(int i = 1;i < planet;++i){
    KS ks;
    ks.from = nodes[i-1].num;
    ks.to = nodes[i].num;
    ks.weight = min(abs(nodes[i-1].x-nodes[i].x),abs(nodes[i-1].y-nodes[i].y),abs(nodes[i-1].z-nodes[i].z));
    edge.push_back(ks);
  }

  sort(nodes.begin(), nodes.end(), cmpZ);

  for(int i = 1;i < planet;++i){
    KS ks;
    ks.from = nodes[i-1].num;
    ks.to = nodes[i].num;
    ks.weight = min(abs(nodes[i-1].x-nodes[i].x),abs(nodes[i-1].y-nodes[i].y),abs(nodes[i-1].z-nodes[i].z));
    edge.push_back(ks);
  }

  sort(edge.begin(),edge.end(),comp);

  for(int i = 0;i < edge.size(); ++i)
  {
    merge(edge[i].from,edge[i].to,parent);

    if(check){
      res += edge[i].weight;
    }
  }

  printf("%d\n",res);

}
