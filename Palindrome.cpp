#include <iostream>
#include <cstring>
using namespace std;

void convert(char str[],int T,int i){
  int j = 0;
  while(T>=i){
    str[j] = T%i + 48;
    T/=i;
    j++;
  }
  str[j] = T+48;
}

int checkpalindrome(char str[],int first,int last){
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
    int T;
    cin >> T;
//	int T2 = T;

//    for(int i =2;i <=64;++i){
			char str[100001] = {0,};

//      convert(str,T,i);
      if(checkpalindrome(str,0,strlen(str)-1)==1){
        cout << 1 << endl;
        break;
      }

//			T = T2;
//			if(i==64){cout << 0 << endl;}

//    }


  }

}
