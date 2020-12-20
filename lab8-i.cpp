#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1){
        cout << -1 << endl;
        return 0;
    }
    bool a[n][n];
    vector<int> g[n];
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            cin >> a[i][j];
            if (a[i][j]){
                g[i].push_back(j);
            }
        }
    }
    int s, to;
    cin >> s >> to;
    s--; to--;
    queue <int> q;
    q.push (s);
    vector <bool> used (n);
    vector <int> d (n), p (n);
    used[s] = true;
    p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (size_t i = 0; i < g[v].size(); ++i) {
            int to = g[v][i];
            if (!used[to]) {
                used[to] = true;
                q.push (to);
                d[to] = d[v] + 1;
                p[to] = v;
            }
        }
    }
    if (!used[to]){
        cout << -1;
        return 0;
    }
    vector<int> path;
    for (int v = to; v != -1; v = p[v])
        path.push_back (v);
    if (path.size() == 1){
        cout << 0 << endl;
        return 0;
    }
    reverse (path.begin(), path.end());
    cout << path.size() - 1 << endl;
    for (int i = 0; i < path.size(); i ++){
        cout << path[i] + 1 << " ";
    }
    cout << endl;

    return 0;
}