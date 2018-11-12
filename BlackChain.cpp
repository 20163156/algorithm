#include <iostream>

using namespace std;

int main(){
	int testNum;
	cin >> testNum;

	while(testNum--){
		long long num;
		long long tmp  = 1;
		long long cnt = 1;

		cin >> num;
		while(1){
			tmp = (num  + cnt ) / 2;
			num = num - tmp - 1;

			if(num - cnt <= 1 ){
				break;
			}
			else{cnt++;}


		}

		cout << cnt << endl;
	}
}
