#include <iostream>
#include <vector>

using namespace std; 

class heap{
	public:
	vector <int> h;
	int hsize;

	heap() {
		hsize = 0;
	}

	void insert(int x){
		h.push_back(x);
		hsize++;
		int i = hsize - 1;
		//(i - 1)/2 == parent index
		while (i > 0 && h[(i-1)/2] < h[i]){
			swap(h[(i-1)/2], h[i]);
			i = ((i-1)/2);
		}
	}

	int mx(){
		return h[0];
	}

	int decr_max(int n){
		h[0]--;
		sift_down(n, 0);
		return 0;
	}

	int mc(int i){
        int l = (i*2)+1;
        int r = (i*2)+2;
        if (l < hsize && r < hsize){
            if (h[l] > h[r]) return l;
            else return r;
        }
        else if(l < hsize) return l;
        else return -1;
    }

	int sift_down(int pos, int x){
        h[pos] -= x;
        while(mc(pos) != (-1)){
            int m = mc(pos);
            if (h[pos] < h[m]){
                swap(h[pos], h[m]);
                pos = m;
            }
            else break;
        }
        return pos + 1;
    }
};


int main() 
{ 
	heap heap;
	int n, x;
	cin >> n >> x;
	for (int i = 1; i <= n; i++){
		int x;
		cin >> x;
		heap.insert(x);
	}
	long long ans = 0;
	for (int i = 0; i < x; i++){
		int mx = heap.mx();
		heap.decr_max(n);
		ans += mx;
	}
	cout << ans << endl;
	return 0; 
}