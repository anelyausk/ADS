#include <iostream>
#include <vector>
 
using namespace std;

int main() {
  int n, t, k = 0, res, idx;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i)
        cin >> a[i];
        
    cin >> t;
    res = abs(t - a[0]);
    idx = a[0];

    for(int i = 1; i < a.size(); ++i){
        if(abs(t - a[i]) < res){
            res = abs(t - a[i]);
            idx = a[i];
        }
    }
    cout << idx;
    return 0;
}