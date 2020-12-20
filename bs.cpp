#include <iostream>
#include <vector>

using namespace std;

int minn, ind;

void bin_search(vector <int> &a, vector <int> &b){
    
}

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    vector <int> b(k);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < k; i++){
        cin >> b[i];
    }
    bin_search(a, b);

    return 0;
}