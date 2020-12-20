//#include <bits/stdc++.h>
#include <iostream> 
#include <deque>
  
using namespace std;

int main()
{
	int n;
	cin >> n;
	deque <int> Goblins, Out;
	for(int i = 0; i < n; ++i){
		char type;
		cin >> type;
		if(type == '+'){
			int GoblinNumber;
			cin >> GoblinNumber;
			Goblins.push_back(GoblinNumber);
		}
		else if(type == '*'){
			int GoblinNumber;
			cin >> GoblinNumber;
			Goblins.push_front(GoblinNumber);
		}
		else{
			cout << Out.front() << '\n';
			Out.pop_front();
		}
		if(Out.size() < Goblins.size()){
			Out.push_back(Goblins.front());
			Goblins.pop_front();
		}

	}	
	return 0;
}