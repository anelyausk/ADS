#include <iostream>
#include <vector>

using namespace std;

bool used[111];
vector <int> g[111];
int cnt = 0;

void dfs(int v, int p){
    used[v] = true;
    cnt++;
    for (int i = 0; i < g[v].size(); i++){
        if (!used[g[v][i]]) dfs(g[v][i], v);
        else if (g[v][i] != p){
            cout << "NO\n";
            exit(0);
        }
    }
}

int main(){
    int n;
    cin >> n;
    int e = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            int k;
            cin >> k;
            if (k == 1){
                e++;
                g[i].push_back(j);
            }
        }
    }
    if ((e / 2) != (n - 1)){
        cout << "NO\n";
        return 0;
    }
    dfs(1, -1);
    if (cnt != n) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}
