#include <iostream>
#include <vector>

using namespace std;

bool used[100][100];
char a[100][100];
int m, n, cnt, num;

void dfs(int i, int j){
    if (i < 0 || j < 0 || i >= m || j >= n) return;
    if (a[i][j] == '.') return;
    if (used[i][j]) return;
    used[i][j] = true;
    dfs(i + 1, j);
    dfs(i - 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
}

int main(){ 
    cin >> m >> n;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (!used[i][j] && a[i][j] == '#'){
                dfs(i, j);
                cnt++;
            } 
        }
    }
    cout << cnt << endl;

    return 0;
}