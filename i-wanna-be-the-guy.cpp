#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
	int n, x, y, z;
	bool found = true;
	cin >> n >> x;
	vector<int> levels;
	for (int i = 0; i < x; ++i){
		cin >> z;
		levels.push_back(z);
	}
	cin >> y;
	for (int i = 0; i < y; ++i){
		cin >> z;
		levels.push_back(z);
	}
	for (int i = 1; i <= n; ++i){
		if (find(begin(levels), end(levels), i) == end(levels)){
			found = false;
			break;
		}
	}
	if (found){
		cout << "I become the guy.";
	}
	else {
		cout <<"Oh, my keyboard!";
	}
	return 0;
}
