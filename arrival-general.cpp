#include <iostream>

using namespace std;

int min(int arr[], int size){
	int index = 0;
	for (int i = 0; i < size; ++i){
		if (arr[i] <= arr[index]){
			index = i;
		}
	}
	return index;
}

int max(int arr[], int size){
	int index = 0;
	for (int i = 0; i < size; ++i){
		if (arr[i] > arr[index]){
			index = i;
		}
	}
	return index;
}

int main(){
	int n, time = 0;
	cin >> n;
	int s[n];
	for (int i = 0; i < n; ++i){
		cin >> s[i];
	}
	
	bool b = true;
	while (b){
		if (max(s, n)!=0){
			swap(s[max(s, n)], s[max(s, n) - 1]);
			time += 1;
		}
		if (min(s, n)!=n-1){
			swap(s[min(s, n)], s[min(s, n) + 1]);
			time += 1;
		}
		b = max(s, n)!=0 or min(s, n)!=n-1;
	}
	
	cout << time;
	return 0;
}
