#include <iostream>
#include <vector>

using namespace std;

class heap{
public:
    vector <int> h;
    int hsize;

    //конструктор по умолчанию
    heap(){
        hsize = 0;
    }

    void insert(int x){
        h.push_back(x);
        hsize++;
        int i = hsize - 1;
        //(i-1)/2 == parent index
        while (i > 0 && h[(i-1)/2] < h[i]){
            swap(h[(i-1)/2], h[i]);
            i = ((i-1)/2);
        }
    }
};

int main(){
    heap heap;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        heap.insert(x);
    }
    for (int i = 0; i <= heap.h.size(); i++) cout << heap.h[i] << " ";
    return 0;
}