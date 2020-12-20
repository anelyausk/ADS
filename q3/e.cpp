#include <iostream>
#include <vector>
#include <algorithm>

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

    vector<int> a = prefixf(s);
    int x = *max_element(a.begin(), a.end()-1);
    int res = a.back();
    while (res > x) res = a[res-1]; 
    if (res == 0){
        cout << "Just a legend\n";
        return 0;
    }
    else cout << s.substr(0, res) << endl;
    return 0;
}