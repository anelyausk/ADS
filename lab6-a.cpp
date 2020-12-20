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
    string s, t;
    cin >> s >> t;
    string ts = t + '#' + s;
    int n = t.size();

    vector<int> a = prefixf(ts);
    for (int i = 0; i < a.size(); i++){
        if (a[i] == n) {
            cout << i - 2 * n << " ";
        }
    }
    cout << endl;
    return 0;
}