#include <stdio.h>

int main() {

	int a = 0;
	int b = 0;
	int result = 0;
	
	printf("Geben Sie ihre Basis ein!\n");
	scanf("%d", &a);
	printf("Geben Sie ihren Exponenten ein!\n");
	scanf("%d", &b);

	for (i = 0; i < b; i++) {
		result *= a;
	}
	

	printf("Das Ergebnis von %d hoch %d ist %d", a, b, result);
	
	return 0;

}
