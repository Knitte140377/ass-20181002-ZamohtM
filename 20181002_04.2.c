#include <stdio.h>

int exp(int a, int b) {
	int c = a;

	for (int i = 1; i < b; i++) {
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

	if (b > 1) {
		printf("%d hoch %d ist %d",a,b,exp(a, b));
	}
	else if (b < -1) {
		b = -b;
		
		float result = exp(a, b);
		float endResult = 1 / result;

		b = -b;
		printf("%d hoch %d ist %f",a,b,endResult);
	}
	else if (b == 1) {
		printf("%d hoch %d ist %d",a,b,a);
	}
	else {
		printf("%d hoch %d ist 1",a,b);
	}


	return 0;
}
