#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int numTest;
  scanf("%d",&numTest);

  while(numTest--){
    int n , m ;
    scanf("%d%d",&n,&m);

    int arr[1005][1005];
    int check[1005][1005];
    int temp1 = 0;
    int temp2 = 0;
    int max;
    long long sum = 0;

    for(int i = 1;i <= n;++i){
      max = -1;
      for(int j = 1;j <= m;++j){
        arr[i][j] = 0;
        check[i][j] = 0;

        //cin >> arr[i][j];
        scanf("%d",&arr[i][j]);

        sum += arr[i][j];

        if(arr[i][j]>max){
          max=arr[i][j];
          temp1 = i;
          temp2 = j;
        }
      }
      check[temp1][temp2] = 1;
      sum -= arr[temp1][temp2];


    }

    for(int i = 1;i <=m;++i){
      max = -1;
      for(int j = 1;j <= n;++j){
        if(arr[j][i]>max){
          max=arr[j][i];
          temp1 = j;
          temp2 = i;
        }
      }
      if(check[temp1][temp2]!=1){
        check[temp1][temp2] = 1;
        sum -= arr[temp1][temp2];
      }


    }
    printf("%lld\n",sum);
  }
}
