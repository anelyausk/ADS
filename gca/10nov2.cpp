#include <iostream>
#include <vector>

using namespace std;

/*
s = ababbababa
t = aba
где строка т, сколько раз входит
/aba/bb//ab/a//ba/
сравниваем все подстроки равные длине т
*/

int main(){
    string s, t;
    cin >> s >> t;
    const int p = 7;
    vector <long long> p_pow (s.size());
    p_pow[0] = 1;
    for (int i = 1; i < p_pow.size(); i++){
        p_pow[i] = p_pow[]
    }

    //находим хеши всех префиксов
    for (int i = 0; i < s.size(); i++){
        h[i] = (s[i] - 'a' + 1) * p_pows[i];
        if (i != 0) h[i] += h[i-1];
        cout << h[i] << " ";
    }
    cout << endl;

    for (int i = 0; i + t.length()-1 < s.length(); i++){
        long long cur_h = h[i+t.length()-1];
        if (i) cur_h -= h[i-1]; 
        if (cur_h == h_t * p_pow[i]){
            cout << i << " ";
        }
    }

    return 0;
}