#include <iostream>

using namespace std;

bool used[100][100];
char a[100][100];
int n, m;

void dfs(int i, int j){
    if (i < 0 || i >= n || j < 0 || j >= m) return;
    if (a[i][j] == '#') return;
    if (used[i][j]) return;
    used[i][j] = true;
    dfs(i + 1, j); //down
    dfs(i, j -1); //left
    dfs(i - 1, j); //up
    dfs(i, j + 1); //right
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    dfs(0,0);
    if (used[n - 1][m - 1]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}