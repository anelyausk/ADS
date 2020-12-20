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
    int k, cnt = 0;
    cin >> s >> k >> t;
    int n = s.size();
    string st = s + '#' + t;
    
    vector<int> a = prefixf(st);
    for (int i = 0; i < a.size(); i++){
        if (a[i] == s.size()) cnt++;
    }
    if (cnt >= k) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}