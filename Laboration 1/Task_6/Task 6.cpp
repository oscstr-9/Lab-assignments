#include <iostream>
#include <string>

using namespace std;

int main() {
	int input;
	int i;
	int m = 0;
	int flag = 0;
	int startNum = 2;
	cout << "enter a positive number: ";
	while (true) {
		cin >> input;

		if (input < 0 || input == 0) {
			cout << "Please enter a POSITIVE number:";

		}
		else {
			break;
		}
	}


	for (int counter = 0; counter < input;) {
		m = startNum / 2;
		for (i = 2; i <= m; i++)
		{
			if (startNum % i == 0)
			{
				flag = 1;
				startNum += 1;
				break;
			}
		}
		if (flag == 0) {
			cout << startNum << endl;
			startNum += 1;
			counter += 1;
		}
		flag = 0;
	}
	return 0;
	
}