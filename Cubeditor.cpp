/****************************************

BOJ 1701 Cubeditor
KMP

*****************************************/

#include <iostream>
#include <string>
#define max(a,b) ((a)>(b)?(a):(b))
using namespace std;


int getPi(string ptn)
{
  int pi[5002] = {0,};
  int max_pi = 0,j = 0;

  for(int i = 1; i < ptn.length(); ++i)
  {
    while(j > 0 && ptn[i] != ptn[j])
      j = pi[j - 1];
    if(ptn[i] == ptn[j])
      pi[i] = ++j;
      max_pi = max(max_pi,pi[i]);
  }
  return max_pi;
}

int main()
{
  string cub,dif;
  cin >> cub;

  int max_ele=0;
  int size = cub.length();

  for(int i = 0;i < size; ++i)
  {
    dif = cub.substr(i,size);
    int new_ele = getPi(dif);
    max_ele = max(max_ele,new_ele);

  }

  cout << max_ele << endl;
}
