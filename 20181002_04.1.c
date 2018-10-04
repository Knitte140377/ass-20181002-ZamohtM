#include <stdio.h>
#include <math.h>

int main() {

	int num1 = 0;
	int num2 = 0;
	int result = 0;

	printf("Geben Sie ihre Basis ein!\n");
	scanf("%d", &num1);
	printf("Geben Sie ihren Exponenten ein!\n");
	scanf("%d", &num2);

	result = pow(num1, num2);

	printf("Das Ergebnis von %d hoch %d ist %d", num1, num2, result);

return 0;
}
