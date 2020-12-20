/*
5 4
.#.#
#.##
#..#
.#..
.#.#

1#2#
#3##
#33#
4#33
4#3#
*/
#include <iostream>

using namespace std;

bool used[100][100];
char a[100][100];
int n, m;
int cnt = 0;
char cmp;

void dfs(int i, int j){
    if (i < 0 || i >= n || j < 0 || j >= m) return;
    if (a[i][j] == '#') return;
    if (used[i][j]) return;
    used[i][j] = true;
    a[i][j] = cmp;
    dfs(i + 1, j); //down
    dfs(i, j - 1); //left
    dfs(i - 1, j); //up
    dfs(i, j + 1); //right
}

int main(){
    cin >> n >> m;
    cmp = '1';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == '.'){
                dfs(i, j);
                cmp++;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}