#include <stdio.h>

int main() {

	int result = 1;
	int counter = 1;
	int num1 = 0;

	printf("Geben Sie ihre Zahl ein!\n");
	scanf("%d", &num1);

	if (num1 <= -1) {
		printf("Geben Sie bitte eine nicht-negative Ganzzahl ein!\n");
	} else {
		while (counter <= num1) {
			result = result * counter;
			counter++;
		}
		printf("Die Fakultät von %d ist %d\n", num1, result);
	}
}
