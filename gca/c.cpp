#include <iostream>

using namespace std;

bool used[100][100];
char a[100][100];
int n, m;
int cnt = 0;

void dfs(int i, int j){
    if (i < 0 || i >= n || j < 0 || j >= m) return;
    if (a[i][j] == '#') return;
    if (used[i][j]) return;
    used[i][j] = true;
    cnt++;
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
    int ans = -1;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            dfs(i, j);
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    cout << ans << endl;
    return 0;
}