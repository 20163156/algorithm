#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Serial{
public:
  string ser_num;
  int sum;
  Serial(int sum,string ser_num):sum(sum),ser_num(ser_num){}
};

bool comp(Serial a,Serial b)
{
  if(a.ser_num.length() != b.ser_num.length()){
    return a.ser_num.length() < b.ser_num.length();
  }
  else{
    if(a.sum != b.sum){
      return a.sum < b.sum;
    }
    else {
      return a.ser_num < b.ser_num;
    }
  }
}

int main()
{

  int N;
  string str;
  string str_arr[1001];
  int sum_arr[1001];

  cin >> N;

  for(int i = 0;i < N;++i){
    int num = 0;
    cin >> str;

    for(int j = 0;j < str.length();++j){
      if( str[j]-'0' <= 9){
        num += str[j]-'0';
      }
    }

    str_arr[i] = str;
    sum_arr[i] = num;

  }

  vector<Serial> v;

  for(int i = 0;i < N;++i){
    v.push_back(Serial(sum_arr[i],str_arr[i]));
  }

  sort(v.begin(),v.end(),comp);

  for(int i = 0; i < N ;++i){
      cout << v[i].ser_num << "\n";
  }

}
