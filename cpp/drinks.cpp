#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	float sum = 0, x;
	for (int i = 0; i < n; ++i){
		cin >> x;
		sum += x;
	}
	sum /=n;
	cout << sum;
	return 0;
}
