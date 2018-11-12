#include <iostream>

using namespace std;

int main()
{
  int num;
  cin >> num;

  for(int i = 0;i < num;i++)
  {
    for(int k = 0;k < i;++k)
    {
        cout << " ";
    }
    for(int j = i;j < num;++j)
    {
        cout << "*";
    }
     cout << "\n";
  }


}
