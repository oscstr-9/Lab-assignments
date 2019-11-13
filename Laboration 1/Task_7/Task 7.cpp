#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
	int x=0;
	printf_s ("Write a positive number: ");
	while (true) {
		scanf_s("%d", &x);

		if (x < 0) {
			printf_s ("A positive number, please.");
		}
		else {
			break;
		}
	}
	int i = x;
	while (x > 0) {
		printf_s("%d",x);
		printf_s(" ");

		x--;
	}
	while (x <= i) {
		printf_s("%d", x);
		printf_s(" ");

		x++;
	}
	return 0;
}