#include<iostream> 
#include <vector>
#include <algorithm>

using namespace std; 
  

int solution(vector<int> &A ) {
    vector<int> vec2;
    int min = 20000 ;
    int mineh = 0 ;
    vec2.resize(A.size()+1);
    vec2[0] = 0;
    for(int i = 1 ; i < vec2.size(); i ++){
        vec2[i] = vec2[i-1]+A[i-1];

    }
    sort(vec2.begin(),vec2.end());
    for(int i = 1 ; i < vec2.size(); i++){
        mineh = vec2[i]-vec2[i-1];
        if(mineh<min){
            min = mineh;
        }
    }
    return min;
}

int main(){
    int n;
    cin >> n;
    int a;
    vector <int> A;
    for (int i = 0 ;i < n; i++){
        cin>>a;
        A.push_back(a);
    }
    vector<int> vec2;
    int min = 20000 ;
    int mineh = 0 ;
    vec2.resize(A.size()+1);
    vec2[0] = 0;
    for(int i = 1 ; i < vec2.size(); i ++)
    {
        vec2[i] = vec2[i-1]+A[i-1];

    }
    sort(vec2.begin(),vec2.end());
    for(int i = 1 ; i < vec2.size(); i++)
    {
        mineh = vec2[i]-vec2[i-1];
        if(mineh<min)
        {
            min = mineh;
        }
    }
    cout << min << endl;
    return 0;
}