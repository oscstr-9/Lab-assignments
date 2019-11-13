#include <iostream>
#include <string>

using namespace std;

int main() {
	int num = 0;
	char letter = 0;
	printf_s("Enter a positive number: ");
	scanf_s ("%d", &num);
	getchar();
	printf_s("Enter a Uppercase letter: ");
	scanf_s("%c", &letter);
	getchar();


	for (int i = 1; i <= num+1; i++) {
		for (int x = 1; x < i; x++) {
			printf_s("%d", x);
		}
		printf_s("\n");
	}



	//we spoke with Teemu about whether or not printing out this or what was said on the assignment was correct. The answer we got was that it was ok to do either one, so i did this version.
	for (int i = 65; i <= letter + 1; i++) {
		for (int x = 65; x < i; x++) {
			printf_s("%c", x);
		}
		printf_s("\n");
	}
	return 0;
}