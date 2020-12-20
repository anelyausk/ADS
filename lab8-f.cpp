#include <iostream>
#include <vector>

using namespace std;

int n;
vector <int> g[100000];
int c[100000];
int cnt;

int inv(int k){
    if (k == 1) return 2;
    else return 1;    
}

void dfs (int v, int k){
    c[v] = k;
    for (int i = 0; i < g[v].size(); i++){
        if (c[g[v][i]] == 0){
            dfs(g[v][i], inv(k));
        }
        else if (c[g[v][i]] == k){
            cout << "NO\n";
            exit(0);
        } 
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 0; i < n; i++){
        if (c[i] == 0) dfs(i, 1);
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++){
        if (c[i] == 1) cout << i+1 << " ";
    }
    cout << endl;
    return 0;
}