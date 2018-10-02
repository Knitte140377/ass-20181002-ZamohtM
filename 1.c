#include <stdio.h>

int
main ()
{
  int a = 0;
  int b = 0;
  int result = 0;

  printf ("Summen Rechner\n");
  printf ("Geben Sie ihre erste Zahl ein!\n");
  scanf ("%d", &a);
  printf ("Geben Sie ihre zweite Zahl ein!\n");
  scanf ("%d", &b);

  result = a + b;

  printf ("Die Summe aus %d und %d ergiebt %d", a, b, result);



  return 0;
}
