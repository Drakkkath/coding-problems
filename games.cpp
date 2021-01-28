#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, x, games = 0;
	cin >> n;
	vector<int> home;
	vector<int> guest;
	for (int i = 0; i < n*2; ++i){
		cin >> x;
		if (i%2 == 0){
			home.push_back(x);
		}
		else{
			guest.push_back(x);
		}
	}
	
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			if (home[i] == guest[j]){
				games += 1;
			}
		}
	}
	cout << games;
	return 0;
}
