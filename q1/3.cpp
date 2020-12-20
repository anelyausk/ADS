#include<iostream>

using namespace std;


int main() {
    int n,q;
    cin >> n >> q;

    int N[n];

    int i = 0;
    while(i < n){
        cin >> N[i];
        i++;
    }  

    for(int i = 0; i < q; i++){

        int a, b,  c, d;
        cin >> a >> b >> c >> d;
        int k = 0;
        
        for(int j = 0; j < n; j++){
        if((a <= N[j] && N[j] <= b) || (c <= N[j] && N[j] <= d)){
            k++;
        }
        }
        cout << k << endl;
    }


    return 0;
}