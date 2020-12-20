//bst
#include <iostream>

using namespace std; 

struct Node{
    int x;
    Node *L, *R;
    Node (int val){
        x = val;
        L = NULL;
        R = NULL;
    }
};


int main(){
    Node root(7);
    Node childL(3);
    Node childR(9);
    root.L = &childL;
    root.R = &childR;
    //cout << root.L << " " << root.R << endl; //мы берем адреса структуры
    cout << root.L->x << " " << root.R->x << endl; //root.L->x same as *root.L.x
    return 0;
}