#include <iostream>
using namespace std;

int main() {
	cout << "Enter the lines number : ";
	int lines;
	int spaces;
	int stars;

	cin >> lines;
	spaces = lines;
	stars = 1;

	for (int i = 0; i < lines; i++) {

		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}

		for (int k = 0; k < stars; k++) {
			cout << "*";
		}

		cout << endl;
		spaces--;
		stars += 2;
	}

	spaces += 2;
	stars -= 4;

	for (int i = 0; i < lines; i++) {

		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}

		for (int k = 0; k < stars; k++) {
			cout << "*";
		}

		cout << endl;
		spaces++;
		stars -= 2;
	}
}