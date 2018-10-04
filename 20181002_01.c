#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	printf("Summen Rechner\n");
	printf("Geben Sie ihre erste Zahl ein!\n");
	scanf("%d", &num1);
	printf("Geben Sie ihre zweite Zahl ein!\n");
	scanf("%d", &num2);
	
	result = num1 + num2;

	printf("Die Summe aus %d und %d ergibt %d", num1, num2, result);

	return 0;
}
