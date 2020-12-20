#include <iostream>

using namespace std;

struct N{
    int x;
    N *left, *right;
    N (int k){
        x = k;
        left = NULL;
        right = NULL;
    }
};

bool exist (N* root, int val){
    if (root == NULL) return false;
    if (root->x == val) return true;
    if (val < root->x) {
        return exist(root->left, val);
    }
    return exist(root->right, val);
}

N *insert(N* root, int val){
    if (exist(root, val)) return root;
    if (root == NULL)return new N(val);
    if (val < root->x) root->left = insert(root->left, val);
    if (val > root->x) root->right = insert(root->right, val);
    return root;
}

int d(N* root) {
    if (root == NULL) return 0;
    return max(d(root->right), d(root->left)) + 1;
}

bool balance(N* root) {
    if (!root) return true;
    int l = 0;
    int r = 0;
    l = d(root->left);
    r = d(root->right);
    if(abs(l-r) <= 1 && balance(root->left) && balance(root->right)){
        return true;
    }
    return false;
}

int main(){
    int x;
    cin >> x;
    N a(x);
    while (x != 0){
        cin >> x;
        if (x != 0) insert(&a, x);
    }
    if (balance (&a)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
