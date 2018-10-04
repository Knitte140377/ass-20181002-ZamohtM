#include <stdio.h>

int main() {

	int num1 = 0;
	int num2 = 0;
	int remainder = 0;

	printf("Geben Sie Ihre erste Zahl ein!\n");
	scanf("%d", &num1);
	printf("Geben Sie Ihre zweite Zahl ein!\n");
	scanf("%d", &num2);

	while (num2 != 0) {

		remainder = num1 % num2;
		num1 = num2;
		num2 = remainder;
	}

	printf("Der GGT ist: %d", num1);
	return 0;
}
