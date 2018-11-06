#include <iostream>

using namespace std;

void move(int index,int size,int arr[],bool &flag)
{
  if(index == size - 1){
    flag = 1;
    return;
  }

  else if(index < 0 || index >= size || arr[index] == -1) return;

  int tmp;
  tmp = arr[index];
  arr[index] = -1;

//  if(index + tmp >= 0 && index + tmp < size)
      move(index+tmp,size, arr, flag);

//  if(index - tmp >= 0 && index + tmp < size)
      move(index-tmp, size, arr, flag);
}

int main()
{
  int testNum;
  cin >> testNum;

  while(testNum != 0){
    int size,start;
    cin >> size >> start;

    int arr[10];

    for(int i = 0;i < size;++i)
    {
      cin >> arr[i];
    }

    bool flag = 0;
    move(start,size,arr,flag);

    if(flag) cout << 1 << endl;
    else cout << 0 << endl;


    testNum--;
  }
}
