#include <stdio.h>

int main() {

	int a;

	printf("Geben Sie eine Zahl ein!\n");
	scanf("%d", &a);

	if (a > 0) {
		while (a >= 0) {
			printf("Counter: %d\n", a--);
		}
	}
	else if (a < 0) {
		while (a <= 0) {
			printf("Counter: %d\n", a++);
		}
	}
	

	return 0;
}
