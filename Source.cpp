#include <iostream>
using namespace std;
int main()
{
	int num1;
	cout << "Enter Number : ";
	cin >> num1;
	if (num1 < 0) {
		cout << num1 << " : error ";
	}
	else if (num1 <= 59) {
		cout << num1 << " : F ";
	}
	else if (num1 <= 69) {
		cout << num1 << " : D ";
	}
	else if (num1 <= 79) {
		cout << num1 << " : C";
	}
	else if (num1 <= 89) {
		cout << num1 << " : B";
	}
	else if (num1 <= 100) {
		cout << num1 << " : A ";
	}
	else if (num1 > 100) {
		cout << num1 << " : error ";
	}
	
	return 0;
}