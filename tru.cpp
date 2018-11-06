#include <iostream>
#include <queue>
using namespace std;

int main()
{
  int testNum;
  cin >> testNum;

  while(testNum != 0){
    int N,W,L,T;    //트럭의갯수, 다리의길이, 최대하중
    queue <int> Q;
    cin >> N >> W >> L;
    int sum = 0;
    int cnt = 0;

    for(int i = 0;i < N;++i){
      cin >> T;

      while(1)
      {
        if(Q.empty()){
            Q.push(T);
            sum += T;
            cnt++;
            break;
        }
        else if(Q.size() == W){
            sum -= Q.front();
            Q.pop();
        }
        else{
            if(sum + T > L){
                Q.push(0);
                cnt++;
            }
            else{
                sum += T;
                Q.push(T);
                cnt++;
                break;
            }
        }

      }


    }
    cout << cnt + W << endl;

    testNum--;
  }
}
