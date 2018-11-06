#include <iostream>
#include <fstream>

using namespace std;


int main()
{

    ifstream ifs;
    ifs.open("input.txt");
    int testNum;
    ifs >> testNum;

    while(testNum!= 0)
    {
      int n,m;
      ifs >> n >> m;
      long sum = 0;
      for(int i = n;i <=m;++i)
      {
        sum += i;
      }
      cout << sum << endl;
      testNum--;
    }



}
