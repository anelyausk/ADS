#include<iostream>

using namespace std;


int main() {
    int n,q;
    cin >> n >> q;

    long long int N[105];

    int i = 0;
    while(i < n){
        cin >> N[i];
        i++;
    }  

    for(int i = 0; i < q; i++){

        long long int a[105], b[105], c[105], d[105];
        cin >> a >> b >> c >> d;
        int k = 0;
        
        for(int j = 0; j < n; j++){
            if((a[j] <= N[i] && N[j] <= b[i]) || (c <= N[j] && N[j] <= d)){
                k++;
            }
            }
        cout << k << endl;
    }


    return 0;
}