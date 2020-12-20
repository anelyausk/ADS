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

void m(N *root, int &r){
    if (root == NULL || r >= 2) return;
    m(root->right, r);
    r++;
    if (r == 2){
        cout << root->x << endl;
        return;
    }
    m(root->left, r);
}

void maxx(N *root){
    int r = 0;
    m(root, r);
}

int main(){
    int x;
    cin >> x;
    N a(x);
    while (x != 0) {
        cin >> x;
        if (x != 0) insert(&a, x);
    }
    maxx(&a);

    return 0;
}