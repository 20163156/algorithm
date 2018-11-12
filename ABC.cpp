#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{

  int num1,num2,num3;
  int arr[3];
  string str;

  cin >> num1 >> num2 >> num3;

  arr[0] = num1;
  arr[1] = num2;
  arr[2] = num3;

  sort(arr,arr+3);

  cin >> str;

  for(int i = 0;i < 3;++i)
  {
    if(str.at(i) == 'A'){
      cout << arr[0] << " ";
    }
    else if(str.at(i) == 'B'){
      cout << arr[1] << " ";
    }
    else{
      cout << arr[2] << " ";
    }

  }


}
