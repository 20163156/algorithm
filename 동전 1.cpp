#include <iostream>

using namespace std;
int main()
{
  int n;  //동전종류
  int k;  //k원 만들꺼

  cin >> n >> k;

  int coin[102];
  int dp[10002] = {0, };


  for(int i = 0;i < n;++i)
  {
    cin >> coin[i];
  }

  dp[0] = 1;

  for(int i = 0;i < n;++i)
  {
    for(int j = 1;j <= k;++j)
    {
        if(j - coin[i] >= 0)
        {
          dp[j] += dp[j - coin[i]];
        }
    }
  }

  cout << dp[k];

}
