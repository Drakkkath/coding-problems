#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int x, shoes[4], tobuy = 0;
	vector<int> y;
	cin >> shoes[0] >> shoes[1] >> shoes[2] >> shoes[3];
	for (int i = 0; i < 4; ++i){
		x = count(begin(shoes), end(shoes), shoes[i]);
		if (x > 2){
			tobuy = x - 1;
			break;
		}
		else if (x == 2 and find(begin(y), end(y), shoes[i])==end(y)){
			y.push_back(shoes[i]);
			tobuy += 1;
		}
		}
	
	cout << tobuy;
	return 0;
}
