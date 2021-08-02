#include <iostream>
#include <algorithm>
using namespace std;

int main(){
/* a + b + c + d = x -> x[3]
   a + b = y -> x[2]
   a + c = z -> x[1]
   b + c = k -> x[0]
*/
	int x[4];
	for (int i = 0; i < 4; ++i){
		cin >> x[i];
	} 
	sort(x, x+4);
	cout << (x[0] + x[2] - x[1])/2 << " " << x[2] - (x[0] + x[2] - x[1])/2 << " " << x[3] - x[2];
	return 0;
}
