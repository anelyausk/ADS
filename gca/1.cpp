//pointer
#include <iostream>
#include <vector>

using namespace std;

//аргументы функции инициализируют параметры ф-ии

void swap(int &a, int &b){
    int tmp = b;
    b = a;
    a = tmp;
}
 
void chg(int c[], int n){
    for (int i = 0; i < n; i++){
        c[i] += 10;
    }
}

void chgv (vector <int> &vec, int n){
    for (int i = 0; i < n; i++){
        vec[i] += 10;
    }
}

//массив - указатель с фиксированной длиной. поэтому можно писать без пойнтера

int main(){
    int a = 5;
    int b = 3;
    swap(a, b);
    int c[5] = {1, 2, 3,4, 5};
    chg(c, 5);
    for (int i = 0; i < 5; i++){
        cout << c[i] << " ";
    }

    vector<int> vec(5);
    for (int i = 0; i <vec.size(); i++){
        vec[i] = i + 1;
    }
    chgv (vec, 5);
    return 0;
}