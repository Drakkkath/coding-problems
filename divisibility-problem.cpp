#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t, moves = 0, x;
	cin >> t;
	vector<int> a;
	vector<int> b;
	for (int i = 0; i < t*2; ++i){
		cin >> x;
		if (i%2==0){
			a.push_back(x);
		}
		else{
			b.push_back(x);
		}
	}
	
	for (int i = 0; i < t; ++i){
		while (a[i]%b[i]!=0){
			a[i] += 1;
			moves += 1;
		}
		cout << moves << endl;
		moves = 0;
	}
	return 0;
}
