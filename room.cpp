#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,M;

char map[100][100];
int visit[100][100];
int cnt_room ;
int cnt_size ;

bool compare(int a , int b){
  return a>b;

}

void find(int i, int j) {
    visit[i][j] = 1;
    cnt_size++;
    if (i+1 < N && map[i+1][j] != '+' && visit[i+1][j] == 0) find (i+1,j);
    if (i-1 >= 0 && map[i-1][j] != '+' && visit[i-1][j] == 0) find (i-1,j);
    if (j+1 < M && map[i][j+1] != '+' && visit[i][j+1] == 0) find (i,j+1);
    if (j-1 >= 0 && map[i][j-1] != '+' && visit[i][j-1] == 0) find (i,j-1);
}

int main()
{
  int testNum;
  cin >> testNum;

  while(testNum--)
  {
    cin >> M >> N;

    for(int i = 0;i < N;++i){
      for(int j = 0;j < M;++j){
        cin >> map[i][j];
      }
    }
    for(int i = 0;i < N;++i){
      for(int j = 0;j < M;++j){
        visit[i][j] = 0;
      }
    }

    cnt_room = 0;
    cnt_size = 0 ;
    vector<int> room_size;

    for(int i = 1;i < N;++i){
      for(int j = 1;j < M;++j){
        if(map[i][j]=='.'&&visit[i][j]!=1){
          find(i,j);
          cnt_room++;
          room_size.push_back(cnt_size);
          cnt_size = 0;
        }
      }
    }

    sort(room_size.begin(),room_size.end(),compare);

    cout << cnt_room << endl;
    for(int i =0;i < room_size.size();++i){
      cout << room_size[i] << " ";
    }
    cout << endl;

  }

}
