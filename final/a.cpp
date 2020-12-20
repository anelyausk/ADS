#include <iostream>
#include <stack>

using namespace std;

bool balance (string s){
    stack <char> st;
    st.push(s[0]);
    for (int i = 1; i < s.size(); i++){
        if (!st.empty()) {
            if (st.top() == s[i])
                st.pop();
            else
                st.push(s[i]);
            continue;
        }
        st.push(s[i]);
    }
    if (st.empty())
        return true;
    return false;
}

int main(){
    string s;
    cin >> s;

    if (balance(s)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}   