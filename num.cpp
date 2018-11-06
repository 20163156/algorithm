#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
  int numTest;
  scanf("%d",&numTest);

  while(numTest--){
    int n,k,cnt=0,num;
    int pl,ps;
    bool flag = false;
    int min  = 100000000;
    scanf("%d%d",&n,&k);
    int arr[1000000] = {0,} ;

    for(int i = 0;i < n;++i){

      scanf("%d",&num);
      arr[i] = num ;
    }

    sort(arr,arr+n);

    ps = 0;
    pl = ps+1;
    while(1){

      if(abs(arr[ps]+arr[pl]-k)<min){
        min = abs(arr[ps]+arr[pl]-k);
        cnt=1;
        pl++;
      }
      else if(abs(arr[ps]+arr[pl]-k)==min){
        cnt++;
        pl++;
      }
      else{
        pl++;
      }
      if(pl==n){ps++;pl=ps+1;}
      if(ps==n-1){break;}


    }

    cout << cnt << endl;

  }
}
