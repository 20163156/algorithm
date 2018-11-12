#include <iostream>
using namespace std;

int main(){
  int testNum;
  cin >> testNum;
  while(testNum--){
    int num;
    cin >> num;
    int arr[11];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for(int i =4;i<=num;++i){
      arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
    }
    cout << arr[num] << endl;


  }


}
