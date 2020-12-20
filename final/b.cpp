#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool used[10000];
int c[10000];

void bfs (int a, int b){
    queue <int> q;
    vector <int> g;
    q.push(a);
    used[a] = true;
    c[a] = -1;
    while(!q.empty()){
        int qq = q.front();
        q.pop();
        if(qq == b){
            while(c[qq] != -1){
                g.push_back(qq);
                qq = c[qq];
            }
            cout << g.size() << endl;
            for(int i = g.size() - 1; i >= 0; --i){
                cout << g[i] << ' ';
            }
            exit(0);
        }
        if(qq > 1000000 || qq < 0){
            continue;
        }
        if(!used[qq * 2]){
            used[qq * 2] = true;
            c[qq * 2] = qq;
            q.push(qq * 2);
        }
        if(!used[qq - 1]){
            used[qq - 1] = true;
            c[qq - 1] = qq;
            q.push(qq - 1);
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    bfs(a, b);
    return 0;
}