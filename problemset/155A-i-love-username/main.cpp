#include <iostream>
using namespace std;

int main(){
	int n, max, min, amazing = 0;
	cin >> n;
	int x[n];
	if (n == 1){
		cin >> x[0];
		cout << 0;
	}
	else{
		cin >> x[0];
		max = x[0];
		min = x[0];
		for (int i = 1; i < n; ++i){
			cin >> x[i];
			if (x[i] > max){
				amazing += 1;
				max = x[i];
			}
			else if(x[i] < min){
				amazing += 1;
				min = x[i];
			}
		}
		cout << amazing;
	}
	return 0;
}
