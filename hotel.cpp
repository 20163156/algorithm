#include <iostream>

using namespace std;

int main()
{
  int testNum;
  cin >> testNum;

  while(testNum != 0){

    int H,W,N;
    cin >> H >> W >> N;

    int remain,quo;
    remain = N%H;
    quo = N/H;


    if(remain == 0){

    	if(quo == 1){
    		    	cout << H << "0" << quo << endl;}
    	else{

    		if(quo > 9){
    			cout << H << quo << endl;
    		}
    		else{cout << H << "0" << quo << endl;}
    	}
    }

    else if(quo > 8){
    	cout << remain  << quo + 1 << endl;}

    else{
    cout << remain << "0" << quo + 1 << endl;}

    testNum--;
  }
}