#include <iostream>
using namespace std;

int main(){
	int row, column, k = 0;
	cin >> row >> column;
	for (int j = 0; j < row; ++j){
		if (j%2 == 0){
			for (int i = 0; i < column; ++i){
				cout << "#";
			}
			cout << endl;
		}
		else{
			if (k%2 == 0){
				for (int i = 0; i < column-1; ++i){
					cout << ".";
				}
				cout << "#" << endl;
			}
			else{
				cout << "#";
				for (int i = 0; i < column-1; ++i){
					cout << ".";
				}
				cout << endl;
			}
			k += 1;
		}
	}
	return 0;
}
