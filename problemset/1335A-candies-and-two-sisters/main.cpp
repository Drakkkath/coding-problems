#include <iostream>
using namespace std;

int main(){
	int t; //number of test cases
	cin >> t;
	unsigned int n; //number of candy
	unsigned int ways[t];
	for (int i = 0; i < t; ++i){
		cin >> n;
		if (n%2 == 0){
			ways[i] = n/2 -1;
		}
		else{
			ways[i] = n/2;
		}
	}
	for (int i = 0; i < t; ++i){
		cout << ways[i] << endl;
	}
	return 0;
}
