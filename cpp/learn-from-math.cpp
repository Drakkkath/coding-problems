#include <iostream>
using namespace std;


bool composite(int x){
	for (int i = 2; i < x and i != x; ++i){
		if (x%i == 0){
			return true;
		}
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	if (n%2 == 0 and composite(n/2)){
		cout << n/2 << " " << n/2;
	}
	else if (n%2 == 0){
		cout << 4 << " " << n-4;
	}
	else{
		int i = 1;
		while (9 + 2*i != n){
			i += 1;
		}
		cout << 9 << " " << 2*i;
	}
	
	return 0;
}
