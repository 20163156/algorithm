#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int testNum;
  cin >> testNum;

  while(testNum != 0){
    int num_team,num_play;
    cin >> num_team >> num_play;

    double arr[1002][2] = {0,};
    int a,b,p,q;

    for(int i = 0;i < num_play;++i){
      cin >> a >> b >> p >> q;
      arr[a][0] += p;
      arr[a][1] += q;
      arr[b][0] += q;
      arr[b][1] += p;

    }

    double arr2[1002] = {0,};

    for(int i = 1;i <= num_team ;++i){
      if(((arr[i][0]*arr[i][0])+(arr[i][1]*arr[i][1]))==0){
        continue;
      }
      else{
      arr2[i] = (arr[i][0]*arr[i][0])/((arr[i][0]*arr[i][0])+(arr[i][1]*arr[i][1]));}

    }

    double max = arr2[1];
    double min = arr2[1];

    for (int i = 1; i <= num_team; i++) {
        if (arr2[i] > max ) {
            max = arr2[i];
        }
        if (arr2[i] < min ) {
            min = arr2[i];
        }
    }

    cout << int(max*1000) << endl;
    cout << int(min*1000) << endl;

    testNum--;
  }
}
