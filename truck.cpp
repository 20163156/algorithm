#include <iostream>

using namespace std;

int main()
{
  //int testNum;
  //cin >> testNum;

  //while(testNum != 0){
    int N,W,L;    //트럭의갯수, 다리의길이, 최대하중
    int truck[1002] ;
    for(int i = 0;i < 1002;++i)
    {
      truck[i] = 10000;
    }
    int weight;
    int cnt = 0;
    int sum;
    cin >> N >> W >> L;

    for(int i = 0;i < N;++i){
      cin >> weight;
      truck[i] = weight;
    }

    for(int i = 0;i < N;++i)
    {
      int k = i;
      sum = 0;
      for(int j = 0;j < W; ++j)
      {
        if (k > N ){break;}
        sum += truck[k];
        if(sum<L){
          k++;
          if(sum + truck[k] > L){
            k--;
          }
        }
        else{break;}
      }

      if(k-i != 0)
      {
        cnt += W+(k-i);
        i += k-i;
        cout<<"dd"<<cnt << endl;
      }

      else{cnt += W;cout << "nhell"<<endl;}


    }

    cout << cnt + 1;

  //  testNum--;
  }
//}
