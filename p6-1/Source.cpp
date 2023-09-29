#include <iostream>
using namespace std;

int main() {
	int asterisks, b;
	cout << "Enter number of asterisks per side: ";
	cin >> asterisks;

	for (int a = 1; a <= asterisks; a++) {
		for (b = 1; b <= asterisks; b++) {
			cout << "*";
		}
		cout << "  ";

		for (b = 11; b <= asterisks+10; b++) {
			if (b == 11 || b == asterisks+10) {
				cout << "*";
			}
			else if (a == 1 || a == asterisks) {
				cout << "*";
			}
			else if (b > 11 && b < asterisks+10) {
				cout << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}