#include<algorithm>
#include<stdio.h>


int arr[(int)1e6+1]={};
int check[(int)1e6+1]={};

using namespace std;

int main(){

      int T;
      scanf("%d", &T);

      while(T--){
				int i, j;
        int n, k;
        int n_front;
        int mn = 1000000000;
				int n_mn;
        int cnt = 0;
        int tmp;
        int res = 0;

        scanf("%d%d", &n, &k);

        int back = n-1;
        for(i = 0; i < n; i++){
          scanf("%d", &arr[i]);
        }
        sort(arr, arr+n);

        for(i = 0; i<n; i++){
          n_front = k - arr[i];
          n_mn = 1000000000;
          for(j = back; j > i; j--){
            if(n_mn >= abs(n_front-arr[j])){
              check[cnt] = abs(n_front-arr[j]);
              n_mn = abs(n_front-arr[j]);
              cnt++;
              tmp = j;
            }
            else {
            //  tmp = j+1;
              break;
            }
          }
          back = tmp;
					if(mn > n_mn){
						mn = n_mn;
					}
        }

        for(i = 0 ; i < cnt; i++){
          if(check[i] == mn){
            res++;
          }
        }

        printf("%d\n", res);
      }
  return 0;
}
