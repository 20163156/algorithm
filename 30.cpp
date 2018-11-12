#include <iostream>
#include <cstring>

using namespace std;

int main()
{

  string s;
  cin >> s;

  int arr[10] = {0,};
  int sum = 0;  //각 자리수 더하기
  int num;

  for(int i = 0;i < s.length();++i){
    num = s[i] - '0';
    sum += num;
    arr[num]++;

  }

  if(sum % 3 == 0 && arr[0] >= 1){
    for(int i = 9 ;i >= 0;i--){
      while(arr[i] >= 1){
          cout << i;
          arr[i]--;
      }
    }
  }
  else {cout << "-1";}



}
