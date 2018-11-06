#include <iostream>

using namespace std;


int facto(int k){

  if(k<=1){
    return 1;
  }
  else{
    return k*facto(k-1);
  }

}

int main()
{
  int testNum;
  cin >> testNum;

  while(testNum--)
  {
    int num;
    cin >> num;

    cout << facto(num) << endl;
  }


}
