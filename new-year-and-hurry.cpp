#include <iostream>
using namespace std;

int main(){
	int probs, time, x = 0;
	cin >> probs >> time;
	time = 240 - time; //available time to solve
	if (((5*probs)*(1+probs))/2 <= time){
		cout << probs;
	}
	else{
		for (int i = 1; i <= probs; ++i){
			x += 5*i;
			if (x > time){
				cout << i-1;
				break;
			}
		}
	}
	return 0;
}
