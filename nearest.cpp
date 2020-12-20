#include <iostream>
#include <vector>

using namespace std;

int res, idx;

void findx (vector <int> &a, int x){
    res = abs(x - a[0]);
    idx = a[0];         

    for (int i = 1; i < a.size(); i++){
        if (abs(x-a[i]) < res){
            res = abs(x-a[i]);
            idx = a[i];       
        }
    }
    cout << idx << endl;
}

int main(){
    int n, x;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;

    findx(a, x);

    return 0;
}