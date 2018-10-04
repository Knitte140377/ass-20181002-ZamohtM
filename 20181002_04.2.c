#include <stdio.h>

int power(int base, int exponent) {
	int result = base;

	for (int i = 1; i < exponent; i++) {
		result = result * base;
	}
	return result;
}

int main() {
	int base = 0;
	int exponent = 0;

	printf("Geben Sie ihre Basis ein!\n");
	scanf("%d", &base);
	printf("Geben Sie ihren Exponenten ein!\n");
	scanf("%d", &exponent);

	if (exponent > 1) {
		printf("%d hoch %d ist %d", base, exponent, power(base, exponent));
	}
	else if (exponent < -1) {
		exponent = -exponent;
		float tempResult = power(base, exponent);
		float result = 1 / tempResult;
		exponent = -exponent;
		printf("%d hoch %d ist %f", base, exponent, result);
	}
	else if (exponent == 1) {
		printf("%d hoch %d ist %d", base, exponent, base);
	}
	else if (base == 0) {
		printf("%d hoch %d ist nicht definiert!", base, exponent);
	}
	else {
		printf("%d hoch %d ist 1", base, exponent);
	}
	return 0;
}
