#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>



#define MAX 100005
using namespace std;

class Node{
public:
  int x;
  int y;
  Node(int x,int y):x(x),y(y){}

};
bool comp(Node a,Node b){
//  if(a.x==0 && b.x==0){return a.y>b.y;}
  if(a.x!=b.x){
  return a.x < b.x;}
  else{return a.y<b.y;}
}

bool comp2(Node a,Node b){
  return a.y > b.y;
}

int main(){
  int numTest;
  scanf("%d",&numTest);

  while(numTest--){
    int N;
    scanf("%d",&N);
    vector<Node> v;
    int arr_X[MAX] = {0,};
    int arr_Y[MAX] = {0,};
    v.push_back(Node(0,0));

    for(int i = 0;i < N;++i){
      scanf("%d%d",&arr_X[i],&arr_Y[i]);
      if((arr_X[i]!=0 )||( arr_Y[i]!=0)){
        v.push_back(Node(arr_X[i],arr_Y[i]));

      }
    }

    sort(v.begin()+1,v.end(),comp);

    int size;
    for(int i = 0;i<v.size()-1;++i){
      if((v[i].x != v[i+1].x)&&(v[i].y != v[i+1].y)){
          size=1;

          for(int j = i;j < v.size();++j){
            if(v[j+1].x==v[j+2].x){size++;}
            else{break;}
          }
            sort(v.begin()+i+1,v.begin()+i+1+size,comp2);
      }

    }

    int M,ran;
    scanf("%d",&M);

    for(int i = 0;i < M;++i){
      scanf("%d",&ran);
      printf("%d %d\n", v[ran-1].x, v[ran-1].y);

    }

  }



}
