#include <iostream>

using namespace std;

struct  N{
  int x;
  N *left, *right;
  N (int k){
      x = k;
      left = NULL;
      right = NULL;
  }
};

bool exist(N* root, int val){
  if (root == NULL) return false;
  if (root->x == val) return true;
  if (val < root->x){
    return exist(root->left, val);
  }
  return exist(root->right, val);
}

N* insert(N* root, int val){
  if (exist(root, val) == true) return root;
  if (root == NULL) return new N(val);
  if (val < root->x) root->left = insert(root->left, val);
  if (val > root->x) root->right = insert(root->right, val);
  return root;
}

int c(N* root) {
  int a = 1;
  if (root == NULL) return 0;
  else {
    a += c(root->left);
    a += c(root->right);
    return a;
  }
}

int main(){
  int x;
  cin >> x;
  N a(x);
  while (x != 0) {
      cin >> x;
      if (x != 0) insert(&a, x);
  }
  cout << c(&a) << endl;

  return 0;
}