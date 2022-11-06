#include <iostream>
using namespace std;

int main() {

	cout << "enter the value: ";
	int value;
	cin >> value;
	int halfValue = int(value / 2);
	int spaces = value;

	for (int i = 0; i < value; i++) {

		if (i == 0 || i == value - 1 || i == halfValue) {
			for (int j = 0; j < value; j++) {
				cout << "= ";
			}
		}
		else if (i > 0 && i < halfValue) {
			for (int k = 0; k < spaces; k++) {
				if (k == 0) {
					cout << "=";
				}
			}
		}
		else if (i > halfValue && i < value - 1) {
			for (int l = 0; l <spaces; l++) {
				if (l == spaces - 1) {
					cout << "=";
				}
				else {
					cout << "  ";
				}
			}
		}

		cout << endl;
	}
}