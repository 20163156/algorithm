#include <iostream>

using namespace std;
int main()
{
  int numTest;
  cin >> numTest;

  while(numTest--){
    int n;
    int arr[1001] = {0,};
    cin >> n;

    for(int i = 0;i < n;++i){
      cin >> arr[i];
    }

    for(int i = n;i>=0;--i){
      int cnt=0;
      bool check = false;

      for(int j = 0;j< n;++j){
        if(arr[j]>=i){
          cnt++;
        }
      }
      if(cnt>=i){check = true;}

      if(check){
        cout << i << endl;
        break;
      }
    }
  }

}
