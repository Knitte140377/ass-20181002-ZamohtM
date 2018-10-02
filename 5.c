#include <stdio.h>

int main(){

	int a = 0;
	int b = 0;
	int r = 0;

	printf("Geben Sie Ihre erste Zahl ein!\n");
	scanf("%d", &a);
	printf("Geben Sie Ihre zweite Zahl ein!\n");
	scanf("%d", &b);

	while (b != 0) {

		r = a % b;
		a = b;
		b = r;
	}

	printf("%d", a);
	return 0;
}
