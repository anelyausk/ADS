#include <iostream>
#include <string>
#include <queue>

using namespace std;
queue <int> q;
string s;
int n;
int main()
{
    
    while(cin >> s)
    {
        if (s == "exit"){
            cout << "bye" << endl;
            break;
        }
        if (s == "push")
        {
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }
        else if (s == "pop")
        {
            if (!q.empty()){
                cout << q.front() << endl;
                q.pop();  
            }
            else cout << "error" << endl;
        }
        else if (s == "front")
        {
            if (!q.empty()){
                cout << q.front() << endl;
            }
            else cout << "error\n";
        }
        else if (s == "size")
        {
            cout << q.size() << endl;
        }
        else if (s == "clear")
        {
            while (!q.empty()){
                q.pop();
            }
            cout << "ok" << endl;
        }
    }

    return 0;
}