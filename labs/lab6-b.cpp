#include <iostream>
#include <vector>

using namespace std;

vector<int> prefixf (string s) {
    int n = s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])  j++;
        pi[i] = j;
    }
    return pi;
}

int main(){
    string s;
    cin >> s;

    int n = s.length();

    vector<int> a = prefixf(s);
    int k = n - a[n - 1];
    if (n % k == 0) cout << n / k << endl;
    else cout << 1 << endl;
    return 0;
}
