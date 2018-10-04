#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;

	printf("Geben Sie ihre erste Zahl ein!\n");
	scanf("%d", &num1);
	printf("Geben Sie ihre zweite Zahl ein!\n");
	scanf("%d", &num2);

	if (num1 > num2) {
		printf("Ihre erste Zahl %d ist größer!", num1);
	} else if (num2 > num1) {
		printf("Ihre zweite Zahl %d ist größer!", num2);
	} else {
		printf("Ihre beiden Zahlen %d und %d sind gleich groß!", num1, num2);
	}

return 0;
}
