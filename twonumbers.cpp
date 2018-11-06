#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
  int numTest;
  scanf("%d",&numTest);

  while(numTest--){
    int n,k,pointer,min,tmp,tmp_pnt,cnt=0;
    int sum = 0;
    int ans = 0;
    int max = 2000000000;
    int arr[1000005];
    int check[1000005];

    scanf("%d%d",&n,&k);

    for(int i = 0;i < n;++i){
      scanf("%d", &arr[i]);
    }

    sort(arr,arr+n);

    pointer = n-1;

    for(int i = 0;i < n;++i){
      sum = k - arr[i];
      min  = 200000000;
      tmp_pnt = pointer;

      while(tmp_pnt > i){
        if(abs(sum-arr[tmp_pnt]) <= min){
          min = abs(sum-arr[tmp_pnt]);
          check[cnt] = abs(sum-arr[tmp_pnt]);
          tmp = tmp_pnt;
          cnt++;
        }
        else{break;}
        tmp_pnt--;
      }

      pointer = tmp;
      if(max > min){
        max = min;
      }
    }

    for(int i = 0;i < cnt;++i){
      if(check[i] == max){
        ans++;
      }
    }

    cout << ans << endl;

  }
}
