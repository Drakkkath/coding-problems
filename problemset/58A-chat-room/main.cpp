#include <string>
#include <iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	size_t h = s.find('h'), e = s.find('e', h), l1 = s.find('l', e), l2 = s.find('l', l1+1), o = s.find('o', l2);
	if (h!=string::npos and e!=string::npos and l1!=string::npos and l2!=string::npos and o!=string::npos){	
		if (h < e and e < l1 and l1 < l2 and l2 < o){
			cout << "YES";
		}
	}
	else{
		cout << "NO";
	}
	return 0;
}
