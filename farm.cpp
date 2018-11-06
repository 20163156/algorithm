#include <iostream>

using namespace std;

int main()
{
  int numTest;
  scanf("%d",&numTest);

  while(numTest--){

    int a, b, n , w , x, y;
    scanf("%d%d%d%d",&a,&b,&n,&w);

    int i,j;
    i = (w-a*n);
    j = (b-a);

    if(j != 0){
      if((i%j) != 0){
        cout <<"-1"<< endl;
      }
      else{
        y = i / j;
        x = n - y;

        if(x>0 && y>0){
          cout << x << " " << y << endl;
        }
        else{cout <<"-1"<< endl;}
      }
    }

    else{
     if(w!=a+b){
       cout << "-1"<< endl;
     }
     else{
       if(n==2){cout <<"1 1"<< endl;}
       else{cout << "-1"<< endl;}
     }

    }





  }

}
