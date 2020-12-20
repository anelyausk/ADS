#include <iostream>
#include <vector>

using namespace std;

vector < pair < int, pair < int, int > > > v;

int main(){
    int n;
    cin >> n;

    for(int i = 1, x, y, z; i <= n; i++){
        cin >> x >> y >> z;
        v.push_back({z, {x, y}});
    }

    sort(v.begin(), v.end());

    for(auto i : v){
        cout << i.second.first << ' ' << i.second.second << ' ' << i.first << '\n';
    }
}