#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char name[50];
	int age = 0;
	char gender[6];
	char address[50];
	int married = 1;
	char marriedChar = 'n';
	char isMarried[] = "married";
	char isNotMarried[] = "not married";
	float height;
	char mrgStr[12];

	printf_s("What's your name?\n");
	scanf_s("%s", &name, 50);
	getchar();

	printf_s("How old are you?\n");
	scanf_s("%i", &age);
	getchar();

	printf_s("How tall are you in meters?\n");
	scanf_s("%a", &height);
	getchar();

	printf_s("What's your gender?\n");
	scanf_s("%s", &gender, 6);
	getchar();

	printf_s("Are you married? Y/N\n");
	scanf_s("%c", &marriedChar,1);
	getchar();

	printf_s("What's your address?\n");
	scanf_s("%s", &address, 50);
	getchar();

	married = !(marriedChar == 'n'|| marriedChar == 'N');
	if (married == true) {
		strcpy_s(mrgStr, isMarried);
	}
	else {
		strcpy_s(mrgStr, isNotMarried);
	}

	printf_s("You have said that you're a ");
	printf_s(gender);
	printf_s(" who is ");
	printf_s("%s", mrgStr);
	printf_s(", your name is ");
	printf_s(name);
	printf_s(", you're ");
	printf_s("%d", age);
	printf_s(" years old, you're ");
	printf_s("%.2f", height);
	printf_s(" meters tall and your address is ");
	printf_s("%s", address);


	return 0;
}