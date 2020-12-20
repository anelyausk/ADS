#include <iostream>
#include <vector>

using namespace std;

int n;
vector <int> g[100000];
bool used[100000];
vector <int> c[100000];
int cnt = 0;

void dfs(int v){
    used[v] = 1;
    c[cnt].push_back(v);
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
    
    for (int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    fc();
    cout << cnt << endl;
    
    for (int i = 0; i < cnt; i++){
        cout << c[i].size() << endl;
        for (int j = 0; j < c[i].size(); j++){
            cout << c[i][j] + 1 << " ";
        }
        cout << endl;
    }

    return 0; 
}