#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack <int> steck;
string s;
int x;

int main(){
    
    while(cin >> s) {
        
        if (s == "exit"){
            cout << "bye" << endl;
            break;
        } 

        if (s == "push") {
            cin >> x;
            steck.push(x);
            cout << "ok" << endl;
        }
        else if (s == "size"){
            cout << steck.size() << '\n';
        }
        else if (s == "pop")
            {
            if (!steck.empty()){
                cout << steck.top() << endl;
                steck.pop();   
                }
            else cout << "error" << "\n";
            }
        else if (s == "back") {
            if (!steck.empty()){
                cout << steck.top() << '\n';
            }
            else {
                cout << "error" << "\n";
            }
        }
        else if (s == "clear") {
            while(!steck.empty()) steck.pop();
            cout << "ok\n";
        }
    }

    return 0;
}