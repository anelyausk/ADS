#include <iostream>
#include <vector>

using namespace std;

int n;
vector <int> g[100000];
bool used[100000];
int cnt = 0;

void dfs(int v){
    used[v] = true;
    for(int i = 0; i < g[v].size(); i++)
        if (!used[g[v][i]])    
            dfs(g[v][i]);
}

void fc(){
    for (int i = 0; i < n; i++){
        if (!used[i]){
            dfs(i);
            cnt++;
        }
    }
}

int main(){
    int m;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    fc();
    cout << cnt-1 << endl;

    return 0; 
}