#include <iostream>

using namespace std;

int n;  //정점의 갯수
int visit_dfs[1002]; //방문 정보
int visit_bfs[1002];
int map[1002][1002]  = {0,};  //인접행렬

int front,rear;
int Q[1002];
//재귀사용
void dfs(int s)
{
  visit_dfs[s] = 1;
  cout << s << " ";

  for(int i = 1;i <= n;++i)
  {
    if(map[s][i] == 1 && visit_dfs[i] == 0)
    {
      dfs(i);
    }
  }


}

void bfs(int s)
{
  front = rear = -1;
  visit_bfs[s] = 1;
  cout << s << " ";

  rear++;     Q[rear] = s;

  while(front != rear)
  {

    front++; s = Q[front];

    for(int i = 1; i <= n;++i)
    {
      if(map[s][i] == 1 && visit_bfs[i] == 0)
      {
        visit_bfs[i] = 1;
        cout << i << " ";
        rear++;   Q[rear] = i;
      }
    }

  }

}
int main()
{
  int m,start;
  int p1,p2;
  int cnt = 0;

  //정점의개수 간선의 개수 시작점
  cin >> n >> m >> start;

  while(cnt < m)
  {
    cin >> p1 >> p2;
    map[p1][p2] = map[p2][p1] = 1;
    cnt++;
  }

  dfs(start);
  cout << '\n';
  bfs(start);


}
