#include <string>
#include <iostream>
using namespace std;

int main(){
	string s, x = "";
	getline(cin, s);	
	for (unsigned int i = 1; i < s.length()-1; ++i){
		if (x.find(s[i]) == string::npos and s[i]!=',' and s[i]!=' '){
			x += s[i];
		}
	}
	cout << x.length();
	return 0;
}
