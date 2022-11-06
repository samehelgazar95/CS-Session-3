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

	int i = 0;
	while(i < lines) {

		int j = 0;
		while (j < spaces) {
			cout << " ";
			j++;
		}

		int k = 0;
		while (k < stars) {
			cout << "*";
			k++;
		}

		cout << endl;
		spaces--;
		stars += 2;
		i++;
	}

	spaces += 2;
	stars -= 4;


	int i = 0;
	while (i < lines) {

		int j = 0;
		while (j < spaces) {
			cout << " ";
			j++;
		}

		int k = 0;
		while (k < stars) {
			cout << "*";
			k++;
		}

		cout << endl;
		spaces--;
		stars -= 2;
		i++;
	}

}

