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
	int x = 0;
	int y = 0;

	printf("Geben Sie ihre Basis ein!\n");
	scanf("%d", &x);
	printf("Geben Sie ihren Exponenten ein!\n");
	scanf("%d", &y);
	printf("\n%d hoch %d ist %d\n\n", x, y, exp(x, y));

	return 0;
}
