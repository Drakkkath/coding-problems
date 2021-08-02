#include <iostream>
using namespace std;

int main(){
	int k, r;
	cin >> k >> r;
	int i = 1;
	k %= 10;
	while ((k*i)%10 != r){
		if ((k*i)%10 == 0){
			break;
		}
		else{
			i += 1;
		}
	}
	cout << i;
	return 0;
}
