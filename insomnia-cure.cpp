#include <iostream>
using namespace std;

int main(){
	int k, l, m, n, d, harmed = 0;
	cin >> k >> l >> m >> n >> d;
	if (k == 1 or l == 1 or m == 1 or n == 1){
		harmed = d;
	}
	else{
		for (int i = 1; i < d+1; ++i){
			if (i%k == 0 or i%l == 0 or i%m == 0 or i%n == 0){
				harmed += 1;
			}
		}
	}
	
	cout << harmed;
	return 0;
}
