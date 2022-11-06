#include <iostream>
using namespace std;

int main() {

	cout << "Enter the value: ";
	int value;
	cin >> value;
	int square = value * 2;


	for (int i = 0; i < value; i++) {

		for (int j = 0; j < square; j++) {
			if (i == 0 || i == value - 1) {
				cout << "-";
			}

			else if (i != 0 || i != value - 1) {
				if (j == 0) {
					cout << "-";
				}
				else if (j == square - 1) {
					cout << "-";
				}
				else {
					cout << " ";
				}
			}	
		}		
		cout << endl;
	}
}