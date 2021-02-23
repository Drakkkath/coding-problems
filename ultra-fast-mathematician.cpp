#include <string>
#include <iostream>
using namespace std;

int main(){
	string n1, n2;
	string answer = "";
	cin >> n1 >> n2;
	for (int i = 0; i < int(n1.length()); ++i){
		if (n1[i] != n2[i]){
			answer = answer + '1';
		}
		else {
			answer = answer + '0';
		}
	}
	cout << answer;
	return 0;
}
