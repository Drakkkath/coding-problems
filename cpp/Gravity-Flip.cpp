#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int columns;
	cin >> columns;
	int boxes[columns];
	for (int i = 0; i < columns; ++i){
		cin >> boxes[i];
	}
	sort(boxes, boxes + columns);
	for (int i = 0; i < columns; ++i){
		cout << boxes[i] << ' ';
	}
	return 0;
}
