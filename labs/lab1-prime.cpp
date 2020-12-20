#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool isPrime = true;

    for (int i = 2; i <= n/2; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }

    if ()

    if (isPrime) cout << "prime\n";
    else cout << "composite\n";
    return 0;
}
