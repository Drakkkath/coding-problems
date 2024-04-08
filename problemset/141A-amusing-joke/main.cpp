#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	string guest, host, s;
	cin >> guest >> host >> s;
	guest += host;
	if (guest.length() != s.length()){
		cout << "NO";
	}
	else{
		bool b = true;
		unsigned int i = 0;
		while (b and i < guest.length()){
		if (count(guest.begin(), guest.end(), guest[i]) != count(s.begin(), s.end(), guest[i])){
			b = false;
		}
		else{
			i += 1;
		}
		}
		if (b){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
	}
	return 0;
}
