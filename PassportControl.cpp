#include <iostream>
#include <fstream>

using namespace std;

int main(){

  ifstream ifs;
  ifs.open("input.txt");
	int testNum;
	ifs >> testNum;

	while(testNum--){

     int n, k;
     ifs >> n >> k;

     if(ifs.peek() == EOF)break;

     int arr[100] = {0,};
     int pass[100] = {0,};

     for(int i = 0;i < n;i++){
       ifs >> arr[i];
     }

     bool check = true;

     for(int i = 0;i < n ;i++){
       for(int j = 0;j < 100;j++){

         if(arr[i]>pass[j]){
           pass[j] = arr[i];
           break;
         }
         else if(pass[j] == 0){
           pass[j] = arr[i];
           break;
         }
        if(j == k - 1){
          check = false;break;
        }

       }
     }
     if(check){cout << "YES" << endl;}
     else{cout << "NO" << endl;}


	}
}
