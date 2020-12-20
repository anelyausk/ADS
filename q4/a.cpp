#include <iostream>
#include <vector>

using namespace std;

int n;
vector <int> g[100000];
bool used[100000];
int cnt;
 
void dfs(int v){
    used[v] = 1;
    cnt++;
    for(int i = 0; i < g[v].size(); i++)
        if (!used[g[v][i]])    
            dfs(g[v][i]);
}

int main(){
    int m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int a = 1000000;
    for (int i = 0; i < n; i++){
        if (!used[i]){
            cnt = 0;
            dfs(i);
            if (cnt < a) a = cnt;
        }
    }
    cout << a << endl;

    return 0;
}