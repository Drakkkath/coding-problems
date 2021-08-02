#include <iostream>
#include <algorithm>
using namespace std;

void foo(){
	int n;
	cin >> n;
	int x[n];
	for (int i = 0; i < n; ++i){
		cin >> x[i];
	}
	
	if (n == 1){
		cout << "YES\n";
	}
	else{
		sort(x, x+n);
		for (int i = 0; i < n-1; ++i){
			if (abs(x[i]-x[i+1]) <= 1){
				x[i] = 0;
			}
		}
		if (count(x, x+n, 0) == n-1){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
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
