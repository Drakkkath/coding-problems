#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t, x;
	cin >> t;
	vector<int> a;
	vector<int> b;
	for (int i = 0; i < t*2; ++i){
		cin >> x;
		if (i%2==0){
			a.push_back(x);
		}
		else{
			b.push_back(x);
		}
	}
	for (int i = 0; i < t; ++i){
		if (a[i]%b[i]==0){
			cout << 0 << endl;
		}
		else{
			cout << b[i]-a[i]%b[i] << endl;
		}
	}
	return 0;
}
