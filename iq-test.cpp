#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, x, even = 0, odd = 0;
	cin >> n;
	int num[n];
	for (int i = 0; i < n; ++i){
		cin >> num[i];
		if (num[i]%2==0){
			even += 1;
		}
		else{
			odd += 1;
		}
	}
	if (odd == 1){
		for (int i = 0; i < n; ++i){
			if (num[i]%2!=0){
				x = i+1;
				break;
			}
		}
	}
	else{
		for (int i = 0; i < n; ++i){
			if (num[i]%2==0){
				x = i+1;
				break;
			}
		}
	}
	cout << x;
	return 0;
}
