#include <iostream>

using namespace std;

int n;  //node 갯수
int tree[28][2];
char a,b,c;

void preorder(int root)
{
    
  if(root == '.')
  {
    return;
  }
  cout << char(root);
  if(tree[root][0] != '.')
  {
    preorder(tree[root][0]);
  }
  if(tree[root][1] != '.')
  {
    preorder(tree[root][1]);
  }
  
}

void inorder(int root)
{
  if(root == '.')
  {
    return;
  }
  if(tree[root][0] != '.')
  {
    inorder(tree[root][0]);
  }
  cout << char(root);

  if(tree[root][1] != '.')
  {
    inorder(tree[root][1]);
  }
}

void postorder(int root)
{
  if(root == '.')
  {
    return;
  }
  if(tree[root][0] != '.')
  {
    postorder(tree[root][0]);
  }
  if(tree[root][1] != '.')
  {
    postorder(tree[root][1]);
  }
  cout << char(root);

}

int main()
{

  cin >> n;

  for(int i = 0;i < n; ++i)
  {
    cin >> a >> b >> c;
    tree[a][0] = b ;
    tree[a][1] = c ;
  }

  preorder(int('A'));
  cout << "\n";
  inorder(int('A'));
  cout << "\n";
  postorder(int('A'));
  cout << "\n";

}
