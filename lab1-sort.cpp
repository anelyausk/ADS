#include <iostream>
#include <queue>

using namespace std;

queue <string> nine;
queue <string> ten;
queue <string> eleven;

string s;

int main(){
    while (cin >> s){
        if (s == "9"){
            cin >> s;
            s = "9 " + s;
            nine.push(s);
        }
        else if (s == "10"){
            cin >> s;
            s = "10 " + s;
            ten.push(s);
        }
        else if (s == "11"){
            cin >> s;
            s = "11 " + s;
            eleven.push(s);
        }
        else {
            break;
        }
    }
    while(!nine.empty()){
        cout << nine.front() << endl;
        nine.pop();
    }
    while (!ten.empty()){
        cout << ten.front() << endl;
        ten.pop();
    }
    while (!eleven.empty()){
        cout << eleven.front() << endl;
        eleven.pop();
    }

    return 0;
}