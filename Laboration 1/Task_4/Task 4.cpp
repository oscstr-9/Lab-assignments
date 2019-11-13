#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	int age;
	string gender;
	string address;
	string isMarried;
	float height;

	cout << "What's your name?" << endl;
	cin >> name;
	cout << "How old are you?" << endl;
	cin >> age;
	cout << "What's your gender?." << endl;
	cin >> gender;
	cout << "What's your adress? Don't use spaces." << endl;
	cin >> address;
	cout << "Are you married? Y/N." << endl;
	cin >> isMarried;
	cout << "How tall are you in meters?" << endl;
	cin >> height;

	if (isMarried == "y" ||isMarried == "Y") {
		isMarried = "married";
	}
	else {
		isMarried = "not married";
	}

	cout << "You have said that you're a " << gender << " who is " << isMarried << ", your name is " << name << ", you're " << age << " years old, you're " << height << " meters tall and your address is " << address << endl;
	return 0;
}