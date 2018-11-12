#include <iostream>
#define MAX 100000

using namespace std;
int N;
int dist[1002][1002];

void Init()
{
  for(int i = 0;i < 1002;++i){
      for(int j = 0;j < 1002;++j){
        dist[i][j] = MAX;
      }
  }

}
void Floyd()
{
//k: 중간 i: 시작 j: 끝
 for(int k = 1; k <= N;++k){
   for(int i = 1; i <= N;++i){
     for(int j = 1;j <= N;++j){
       if(i == j){
         continue;
       }
       if (dist[i][k] + dist[k][j] < dist[i][j]){
           dist[i][j] = dist[i][k] + dist[k][j];
       }
     }
   }
 }

}

int main()
{
  int M,X;
  int start,end,cost;

  cin >> N >> M >> X;

  Init();

  for(int i = 0;i < M;++i){
    cin >> start >> end >> cost;

    dist[start][end] = cost;
  }

  Floyd();

  for(int i = 1;i <= N;++i)
  {
    for(int j = 1;j <= N;++j)
    {
      if(dist[i][j] == MAX)
      {
        dist[i][j] = 0;
      }
    }
  }

  int max;
  max = dist[1][X] + dist[X][1];

  for(int i = 2;i <= N;++i){
    if( max < dist[i][X] + dist[X][i])
      max = dist[i][X] + dist[X][i];


  }
  cout << max;



}
