#include <iostream>
using namespace std;

int main(){
	int n, bills = 0;
	cin >> n;
	bills += n/100;
	n %= 100;
	if (n != 0){
		bills += n/20;
		n %= 20;
		if (n != 0){
			bills += n/10;
			n %= 10;
			if (n != 0){
				bills += n/5 + n%5;
			}
		}
	}
	
	cout << bills;
	return 0;
}
