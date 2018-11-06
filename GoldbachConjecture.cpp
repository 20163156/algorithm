#include <iostream>
using namespace std;

bool isprime(int n){
  if(n<=1){return false;}
  int tmp = n/2;

  for(int i = 2; i <= tmp; i++){
    if(n % i == 0){
    return false;
    break;}

  }

  return true;

}

int main()
{
  int testNum;
  cin >> testNum;

  while(testNum--){
    int num,key,value,min,temp;

    cin >> num;
    int arr[1000] = {0,};

    key = num/2;
    value = num/2;

    arr[key] = value;
    min = 100000;

    if(isprime(key) && isprime(value)){
      min = value-key;
      temp = key;
    }

    while(key){

      key--;
      value++;

      if(isprime(key) && isprime(value)){
        arr[key] = value;
        if((value-key)<min){
          min = value-key;
          temp = key;
        }
      }
    }

    cout << temp << " "<<arr[temp] << endl;

  }

}
