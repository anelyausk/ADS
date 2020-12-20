//prefix
#include <iostream>
#include <vector>

using namespace std;

//s = abracadabra
//a = [0, 0, 0, 1, ...] 
//like:
// s = ababbababa
// a = [0(a), 0(ab), 1(aba), 2 (ab - prefix = ab - suffix), 0(ababb), 1(ababba), 2(ababbab), 3(ababbaba), 4(ababbabab), 3(ababbababa)]
// v prefix func first element always 0

int main(){
    vector <int> prefix_function (string s) a{
        int n = (int) s.length();
        vector <int> ans = prefix_function(s);
        for (int i = 1; i < n; i++){
            int j = pi[i-1];
            while (j < 0; j )
        }
    }

    return 0;
}