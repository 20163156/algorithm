#include <iostream>

using namespace std;
class node{
public:
  int x;
  int y;
  node(int x,int y):x(x),y(y){}
};
int main()
{
  int numTest;
  cin >> numTest;

  while(numTest--)
  {
    int a,b,henry;
    cin >> a >> b;

    while(a!=0)
    {
      if(b%a!=0){henry = b/a+1;}
      else{henry=b/a;}
      a=a*henry-b;
			b=b*henry;

    }
    cout << henry  << endl;

  }

}
