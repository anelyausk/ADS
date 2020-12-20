#include <iostream>
#include <vector>

using namespace std;

int bin_search(vector<int> &a, int k) {
    int l = 0;
    int r = a.size() - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] < k)
            l = m + 1;
        else
            r = m;
    }
    if (a[r] == k)
        return r;
    else return -1;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ind = bin_search(a, k);
    cout << ind << endl;
    return 0;
}