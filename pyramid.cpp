//숫자 피라미드형으로 출력 

#include <iostream>
using namespace std;

int num[102][102];

void outputPyramid(int n, int k);
int main(void)
{
    int t;
    int n, k;
	cin >> t;
    for(int i=0; i<t; i++)
    {
		cin >> n >> k;
        outputPyramid(n,k);
    }

	return 0; 

}

void outputPyramid(int n, int k)
{
	int l = 1;
	for(int i = 1;i <= n;i++)
	{
		int temp = n - 1;

		for(int j = 1;j <= i;j++)
		{
			if(j == 1){num[i][j] = l;}
			else{
				num[i][j] = temp-- + num[i][j-1];
			}


		}
		l++;
	}

	 for(int j = 1;j < k ;j++){
	 	cout << num[k][j] << "*";
	 }cout << num[k][k]<<endl;


}