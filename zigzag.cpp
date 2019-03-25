// 숫자 지그재그형으로 출력
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
	int cnt = 1;
	int flag = 1;

	for(int i = 1;i <=n;i++)
	{
		if(flag == 1){
			for(int j = 1;j<=i;j++)
			{
				num[i][j] = cnt++;
			}
			flag = 0;
		}

		else{
			for(int j = i;j>=1;j--)
			{
				num[i][j] = cnt++;
			}
			flag = 1;
		}

	}

	for(int j = 1;j < k ;j++){
		cout << num[k][j] << "*";
	}cout << num[k][k]<<endl;

}