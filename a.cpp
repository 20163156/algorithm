struct node{
  char data;
  struct node* left;

  struct node* right;
}

void postorder(node *root){
  if root=null rtn;
  else
    postorder(root->left)
    postorder(root->right)
      printf("%c",root->data)

}

int size(node *root){
  if root=null rtn
  else
    return 1+size(root->left)+size(root->right)
}
