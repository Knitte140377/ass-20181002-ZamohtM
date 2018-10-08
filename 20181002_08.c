#include <stdio.h>

int main()
{
	unsigned long long num1 = 0;
	unsigned long long num2 = 0;

	for (num1 = 2; num1 <= 18446744073709551615; num1++) {
		for (num2 = 2; num2 <= num1; num2++) {
			if (num1 % num2 == 0 && num1 != num2) break;

			if (num2 == num1) {
				printf("Primzahl: %d\n", num1);
			}
		}
	}
	return 0;
}
