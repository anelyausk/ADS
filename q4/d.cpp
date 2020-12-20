#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> g[100000];
bool used[100000];
vector <int> p;

void dfs (int v) {
    used[v] = 1;

    for (int i = 0; i < g[v].size(); ++i) {
        if(!used[g[v][i]])
            dfs(g[v][i]);
    }

    p.push_back(v);
}

int main() {
    int m;
    cin >> n >> m;

    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }

    for (int i = 1; i <= n; i++){
        if (!used[i]) dfs(i);
    }

    reverse(p.begin(), p.end());

    for (int i = 0; i < p.size(); i++){
        cout << p[i] << " ";
    }

    cout << endl;

    return 0;
}