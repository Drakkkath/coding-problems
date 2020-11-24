#include <iostream>
using namespace std;

int main(){
	int n, k, x = 0;
	cin >> n >> k;
	k = 240 - k; //available time to solve
	for (int i = 1; i <= n; ++i){
		x += 5*i;
		if (x >= k){
			if (x == k){
				cout << i;
			}
			else{
				cout << i-1;
				break;
			}
		}
	}
	return 0;
}
