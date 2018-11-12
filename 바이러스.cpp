#include <iostream>
#define MAX 100000

using namespace std;
int N;
int dist[102][102];

void Init()
{
  for(int i = 0;i <= N;++i){
      for(int j = 0;j <= N;++j){
        dist[i][j] = MAX;
      }
  }
}
void Floyd()
{
//k: 중간 i: 시작 j: 끝
 for(int k = 0; k <= N;++k){
   for(int i = 0; i <= N;++i){
     for(int j = 0;j <= N;++j){
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
  int M;  //연결쌍의 수
  int node1,node2;

  cin >> N >> M;

  Init();

  for(int i = 0; i < M;++i){
    cin >> node1 >> node2;

    dist[node1][node2] = dist[node2][node1] = 11;

  }

  Floyd();

  int cnt = 0;

  for(int i = 0;i <= N;++i){
    if(dist[1][i] != MAX){
      cnt++;
    }
  }

  cout << cnt;


}
