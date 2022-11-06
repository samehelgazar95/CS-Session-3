#include <iostream>
using namespace std;

int main() {
	cout << "enter the value: ";
	int value;
	cin >> value;
	int firstSpace = 0;
	int secSpace = (value * 2) - 2;
	int thirdSpace = 0;

	for (int i = 0; i < value; i++) {
		cout << "*";
		for (int j = 0; j < firstSpace;j++) {
			cout << " ";
		}
		firstSpace++;
		cout << "*";


		for (int j = 0; j < secSpace; j++) {
			cout << " ";
		}
		secSpace -= 2;
		cout << "*";


		for (int j = 0; j < thirdSpace; j++) {
			cout << " ";
		}
		thirdSpace++;
		cout << "*";

		cout << endl;
	}
}