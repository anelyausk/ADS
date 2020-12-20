#include <iostream>
#include <vector>

using namespace std;

vector <int> g[111];
bool used[111];
int cnt = 0;

void dfs(int v){
    if (used[v]) return;
    used[v] = 1;
    cnt++;
    for(int i = 0; i < g[v].size(); i++)
      dfs(g[v][i]);
}

int main(){
    int n, s;
    cin >> n >> s;
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            int k;
            cin >> k;
            if (k == 1)
                g[i].push_back(j);
        }
    }
    dfs(s);
    cout << cnt << endl;

    return 0; 
}