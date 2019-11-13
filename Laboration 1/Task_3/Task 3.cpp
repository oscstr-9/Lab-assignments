#include <iostream>
#include <string>
using namespace std;

int main() {
	int x;
	int i = 0;

	cout << "Enter a number." << endl;
	cin >> x;
	cout << "" << endl;

	cout << "This is made with a for loop" << endl;
	for (; i < x; i++) {
		cout << "Hello World" << endl;
	}
	cout << "" << endl;

	i = 0;

	cout << "This is made with a while loop" << endl;
	while (i < x) {
		cout << "Hello World" << endl;
		i++;
	}
	cout << "" << endl;

	i = 0;

	cout << "This is made with a do while loop" << endl;
	do
	{
		cout << "Hello World" << endl;
		i++;
	} while (i < x);
	cout << "" << endl;

	system("pause");
	return 0;
}