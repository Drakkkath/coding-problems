using namespace std;
#include <iostream>
#include <string>


int main(){
	int t;
	cin >> t;
	for (int test = 0; test < t; ++test){
		string a = "";
		string b;
		cin >> b;
		a += b.substr(0, 2);
		int len = b.length();
		for (int i = 3; i < len; ++i){
			if (i % 2 != 0){
				a += b[i];
			}
		}
		cout << a << "\n";
	}
	return 0;
}
