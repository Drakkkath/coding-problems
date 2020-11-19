#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<char> c;
	for (unsigned int i = 0; i < s.length(); ++i){
		if (s[i] > 90){
			s[i] -= 32;
		}
		if (find(c.begin(), c.end(), s[i]) == c.end()){
			c.push_back(s[i]);
		}
	}
	if (c.size() == 26){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
	return 0;
}
