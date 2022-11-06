#include <iostream>
using namespace std;

int main() {
	cout << "Enter the value: ";
	int value;
	cin >> value;
	int shape = value;

	for (int i = 0; i < value; i++) {

		for (int j = 0; j < value; j++) {
			cout << "---";
		}

		cout << endl;
	}

}