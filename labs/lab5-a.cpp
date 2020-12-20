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

    int sift_up(int pos, int x){
        h[pos] += x;
        while(pos > 0 && h[(pos-1)/2] < h[pos]){
            swap(h[(pos-1)/2], h[pos]);
            pos = (pos-1)/2;
        }
        return pos + 1;
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
    int q;
    cin >> q;
    while (q--){
        int pos, x;
        cin >> pos >> x;
        pos--;
        cout << heap.sift_up(pos, x) << endl;
    }
    for (int i = 0; i < heap.h.size(); i++) cout << heap.h[i] << " ";
    return 0;
}
