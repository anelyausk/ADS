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
    int q, l, r;
    cin >> q;

    for (int i = 0; i < q; i++){
        cin >> l >> r;
        int cnt = 0;
        string t = s.substr(l-1, r-l+1);
        string ts = t + '#' + s;
        vector<int> a = prefixf(ts);

        for (int i = 0; i < ts.size(); i++){
            if (a[i] == t.size()) cnt++;
        }   
        cout << cnt << endl;
    }


    return 0;
}
