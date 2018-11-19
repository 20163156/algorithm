#include <iostream>

using namespace std;

int main()
{
  int testNum;
  cin >> testNum;

  while(testNum--){
    int number;
    cin >> number;
    int num;
    num = number;
    bool check = false;

    int cnt = 1000;
    while(cnt--){
      int sum = 0;
      while(num!=0){
        sum += (num%10)*(num%10);
        num /= 10;
      }
      num = sum;

      if(num == 1){check=true;break;}
      else if(num == number){check =false;break;}

 
    }
    if(check) cout << "HAPPY"<<endl;
    else cout<<"UNHAPPY" << endl;
  }
}
