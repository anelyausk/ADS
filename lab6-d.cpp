//префикс-ф-я
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

    vector<int> a = prefixf(s);
    for (int i = 0; i < a.size(); i++){
    cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}