#include <stdio.h>

int main()
{
	unsigned long long a = 0;
	unsigned long long b = 0;

	for (a = 2; a <= 18446744073709551615; a++) {
		for (b = 2; b <= a; b++) {
			if (a % b == 0 && a != b) break;

			if (b == a) {
				printf("Primzahl: %d\n", a);
			}
		}
	}
	return 0;
}
