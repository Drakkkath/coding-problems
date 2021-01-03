using namespace std;
#include <iostream>
#include <algorithm>

int main(){
	int n;
	cin >> n;
	int a[n];
	
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	
	int police = 0;
	int cases = 0;
	int left = 0;
	int i = 0;
	
	while (i < n){
		int j = i;
		if (a[j] == -1){
			while (j < n && a[j] == -1){
				++cases;
				++j;
			}
			if (cases >= police){
				left += cases - police;
				police = 0;
			}
			cases = 0;
		}
		else{
			while (j < n && a[j] != -1){
				police += a[j];
				++j;
			}
		}
		i = j;
	}
	cout << left;
	return 0;
}
