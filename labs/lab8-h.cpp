#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> g[111];
bool used[111];
vector <int> st(111, 0);
vector <int> p;

void dfs (int v) {
    if (st[v] == 1){
        cout << "No" << endl;
        exit(0);
    }

    if (st[v] == 2) return;
    st[v] = 1;

    for (int i = 0; i < g[v].size(); ++i) {
        int to = g[v][i];
        dfs(to);
    }

    st[v] = 2;
    p.push_back(v);
}

int main() {
    int m;
    cin >> n >> m;

    for (int i = 1; i <= m; i ++){
        int u, v;
        cin >> u >> v;
        u--;v--;
        g[u].push_back(v);
    }

    for (int i = 0; i < n; i ++){
        if (st[i] == 0) dfs(i);
    }

    reverse(p.begin(), p.end());

    for (int i = 0; i < p.size(); i++){
        cout << p[i] + 1 << " ";
    }

    return 0;
}
