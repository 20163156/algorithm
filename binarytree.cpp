#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>

#define MAX (1<<21)
int tree[MAX], temp[MAX],sum[MAX];
using namespace std;
int main(){
  int testNum;
  scanf("%d",&testNum);

  while(testNum--){

    int k,dis,size,left,right;
    scanf("%d",&k);
    size = 1 << (k + 1);

    for(int i = 0;i < MAX; ++i){
      tree[i] = 0;
      temp[i] = 0;
      sum[i] = 0;
    }

    for(int i = 2;i < size; ++i){
      scanf("%d",&dis);
      tree[i] = dis;
    }
    
    for(int i = pow(2,k)-1;i > 0; --i){
      left=i*2;
      right=i*2+1;
      temp[i] = max(temp[left]+tree[left],temp[right]+tree[right]);
      sum[i] = sum[left]+sum[right]+(temp[i]-temp[left])+(temp[i]-temp[right]);

    }

    printf("%d\n",sum[1]);
  }
}
