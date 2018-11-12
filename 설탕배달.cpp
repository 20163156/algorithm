#include <iostream>

using namespace std;

int main()
{
  int N,B = 0;
  int Q = 0;
  int result;

  cin >> N;

  Q = N / 5;
  N = N % 5;

  while(Q >= 0)
  {
    if(N % 3 != 0 && Q > 0)
    {
      Q--;
      N += 5;
      continue;
    }

    if(N % 3 == 0)
    {

      B = N / 3;
      N = N % 3;

    }

    if(N == 0)
      break;

    if(Q == 0 & N != 0)
      break;

  }

  result = B + Q;

  if(N != 0)
  {result = -1;}

  cout << result;

}
