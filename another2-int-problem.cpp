using namespace std;
#include<iostream>

void sol(){
	int a, b;
	cin >> a >> b;
	if (abs(b-a)%10 == 0)
		cout << abs(b-a)/10 << endl;
	else
		cout << abs(b-a)/10 + 1 << endl;
}
int main(){
	int t; 			//a must become b. Figure out the steps required to do so
	cin >> t;		//steps: a+k or a-k for k in[1,10]
	for (int i = 0; i < t; ++i){
		sol();
	}
	
	return 0;
}
