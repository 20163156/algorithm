#include <iostream>
#include <queue>

using namespace std;

int main()
{
  int N,M;
  queue<int> q;

  int a;
  cin >> N >> M;


  for(int i = 1;i <= N;++i){
    q.push(i);
  }

  cout << "<";

  while(!q.empty()){

    for(int i = 0;i < M-1;++i){
      a = q.front(); 
      q.pop();
      q.push(a);
    }
    if(q.size()==1){
      cout << q.front()<<">" << endl;
      q.pop();
      break;
    }
    cout << q.front() << ", ";
    q.pop();
  }



}
