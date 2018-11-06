#include <iostream>

using namespace std;

int main(){
  int testNum;
  cin >> testNum;

  while(testNum--){
    int num;
    cin >> num;

    int eru[1000] = {0,};
    
    for(int i = 1;i <=50;++i){
      eru[i] = eru[i-1]+i;
    }

    bool check = false;

    for(int i = 1;i <=50;++i){
      for(int j = 1;j<=50;++j){
        for(int k =1 ;k<=50;++k){
          if(num == eru[i]+eru[j]+eru[k]){
            check = true;
            break;
          }
        }
      }
    }

    cout << check << endl;

  }
}
