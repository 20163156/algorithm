#include <iostream>
#include <cstring>
using namespace std;


int checkpalindrome(string str,int first,int last){
  if(last<=first)
    return 1;
  else if (str[first]!=str[last])
    return 0;
  else return checkpalindrome(str,first+1,last-1);
}

int main()
{
  int testNum;
  cin >> testNum;

  while(testNum--)
  {
    string str;
    cin >> str;

    cout << checkpalindrome(str,0,str.length()-1) << endl;


  }

}
