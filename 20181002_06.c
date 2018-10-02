#include <stdio.h>

int main() {

	int result = 1;
	int i = 1;
	int a = 0;

	printf("Geben Sie ihre Zahl ein!");
	scanf("%d", &a);

	while (i <= a) {
		result = result * i;
		i++;
	}

	printf("%d", result);

}
