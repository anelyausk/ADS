#include <iostream>

using namespace std;

int n, q, g[1050][1050];

int main(){
    cin >> n >> q;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> g[i][j];
        }
    }
    int x, y, z;
    for (int i = 0; i < q; i++){
        cin >> x >> y >> z;
        if (g[x][y] && g[x][z] && g[y][z])
            cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}