//мост плохой, если a[i][j] != 1
//
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    int b[n];
    for (int i = 0; i < n; i ++){
        cin >> b[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] == 1 && b[i] != b[j]) cnt++;
        }
    }
    cout << cnt/2 << endl;
    return 0;
}