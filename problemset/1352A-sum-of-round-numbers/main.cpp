#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

void foo(string n){
	cout << n.length() - count(begin(n), end(n), '0') << endl;
	for (unsigned int i = 0; i < n.length(); ++i){
		if (n[i] != '0'){
			cout << (int(n[i])-48) * pow(10, n.length()-1-i) << " ";
		}
	}
	cout << "\n";
}

int main(){
	int t;
	cin >> t;
	string s;
	vector<string> input;
	for (int i = 0; i < t; ++i){
		cin >> s;
		input.push_back(s);
	}
	
	for (unsigned int i = 0; i < size(input); ++i){
		foo(input[i]);
	}
	
	return 0;
}
