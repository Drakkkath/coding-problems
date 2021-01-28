#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void foo(){
	int n;
	vector<int> x;
	vector<int> y;
	cin >> n;
	int p[n];
	for (int i = 0; i < n; ++i){
		cin >> p[i];
	}
	for (int i = 0; i < n; ++i){
		if (count(p, p+n, p[i]) == 1){
			x.push_back(p[i]);
			y.push_back(i+1);
		}
	}
	if (size(x) == 0){
		cout << -1 << "\n";
	}
	else{
		int min = *min_element(begin(x), end(x));
		int i = 0;
		while (x[i] != min){
			i += 1;
		}
		cout << y[i] << "\n";
	}
}

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i){
		foo();
	}
	
	
	return 0;
}
