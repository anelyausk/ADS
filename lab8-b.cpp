#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int ansmin = 10000000;
    int f, s, t;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                int c = a[i][j] + a[j][k] + a[k][i];
                if (c < ansmin && a[i][j] != 0 && a[j][k] != 0 && a[k][i] != 0){
                    ansmin = c;
                    f = i;
                    s = j;
                    t = k;
                }
            }
        }
    }

    cout << f + 1 << " " << s + 1 << " " << t + 1 << endl; 

    return 0;
}