#include <stdio.h>

int main() {

	int num1=0;

	printf("Geben Sie eine Zahl ein!\n");
	scanf("%d", &num1);

	if (num1 > 0) {
		while (num1 >= 0) {
			printf("Counter: %d\n", num1--);
		}
	}
	else if (num1 < 0) {
		while (num1 <= 0) {
			printf("Counter: %d\n", num1++);
		}
	}

	return 0;
}
