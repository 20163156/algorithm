/****************************************

BOJ 1305 광고

KMP

*****************************************/

#include <iostream>
#include <cstring>
using namespace std;

int pi[1000002];
void getPi(string ptn)
{
  int j = 0;
  for(int i = 1; i < ptn.length(); ++i)
  {
    while(j > 0 && ptn[i] != ptn[j])
      j = pi[j - 1];
    if(ptn[i] == ptn[j])
      pi[i] = ++j;

  }
}

int main()
{
  int size;
  string ad;
  cin >> size >> ad;
  getPi(ad);
  cout << size - pi[size-1] << endl;
}
