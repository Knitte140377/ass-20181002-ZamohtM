#include <stdio.h>

int exp(int a, int b) {
	int i = 1;
	int c = a;

	for (i; i < b; i++) {
		c = c * a;
	}

	return c;
}

int main() {
	int a = 0;
	int b = 0;

	printf("Geben Sie ihre Basis ein!\n");
	scanf("%d", &a);
	printf("Geben Sie ihren Exponenten ein!\n");
	scanf("%d", &b);
	printf("%d hoch %d ist %d\n", a, b, exp(a, b));

	return 0;
}
