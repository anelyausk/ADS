// задаются коорлинаты двух точек 
// можно ли с первой координаты дойти до след точки?
#include <iostream>

using namespace std;

bool used[100][100]; //false
char a[100][100];
int n, m;
int cnt;

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
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    dfs(x1 - 1, y1 - 1);
    if (used[x1 - 1][y1 - 1]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}