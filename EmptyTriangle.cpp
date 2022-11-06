#include <iostream>
using namespace std;

int main() {

	cout << "Enter the value: ";
	int value;
	cin >> value;
	int spaces = value;
	int stars = 1;
	int secSpaces = 0;
	int last = value*2;

	for (int i = 0; i < value; i++) {
		 
		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}

		for (int j = 0; j < stars; j++) {
			if (j == 0 || j == stars - 1 || i == value - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}

		stars += 2;
		spaces--;
		cout << endl;
	};
}