#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int m[] = {1, 2, 4};
	cout << *min_element(m, m+3);
	
	
	return 0;
}
