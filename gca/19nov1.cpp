//кол-во различных подстрок в строке
#include <iostream>
#include <deque>
#include <vector>

using namespace std;

//трай это часть других алгоритмов

int main(){
    //пи = префикс ф-я (так ее обозначают)
    string s;
    cin >> s;
    deque <char> ans;
    ans.push_back(s[0]);
    //ans = ['a']
    int cnt = 1;
    vector <int> pref;
    int mx = -1;
    for (int i = 1; i < s.size(); i++)
        ans.push_front(s[i]); 
        pref = prefix_function(ans);
        for (int j = 0; j < pref.size(); j++){
            mx = max (mx, pref[i])
        }
        int m = ans.size() - 1;
        cnt += m + 1 - mx;
        mx = -1;
    cout << cnt << endl;
    return 0;
}