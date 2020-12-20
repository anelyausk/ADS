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

void check(int b, int c){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (used[i][j]) cnt++;
        }
    }
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    dfs(x - 1, y - 1);
    cout << cnt << endl;
    return 0;
}