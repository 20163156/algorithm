#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  int numTest;
  cin >> numTest;

  while(numTest--)
  {
     int numCard;
     cin >> numCard;

     int multi3 = 0;
     int multi2 = 0;
     int arr[10000] = {0,};

     for(int i = 0;i < numCard;++i){
        cin >> arr[i];
     }

     sort(arr,arr+10000);

     int mul1 = arr[9999]*arr[9998]*arr[9997];
     int mul2 = arr[0]*arr[1]*arr[9999];
     multi3 = max(mul1,mul2);

     int mul3 = arr[9999]*arr[9998];
     int mul4 = arr[0]*arr[1];
     multi2 = max(mul3,mul4);

     if(multi3>=multi2){
       cout << multi3<<endl;
     }else{cout << multi2 << endl;}

  }

}
