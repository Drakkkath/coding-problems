#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int puzzles[m], x[n];
	for (int i = 0; i < m; ++i){
		cin >> puzzles[i];
	}
	sort(puzzles, puzzles + m);
	for (int i = 0; i < n; ++i){
		x[i] = puzzles[i];
	}
	cout << *max_element(x, x+n) - *min_element(x, x+n);
	return 0;
}
