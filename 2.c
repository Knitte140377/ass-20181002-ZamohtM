#include <stdio.h>

int
main ()
{
  int a = 0;
  int b = 0;

  printf ("Geben Sie ihre erste Zahl ein!\n");
  scanf ("%d", &a);
  printf ("Geben Sie ihre zweite Zahl ein!\n");
  scanf ("%d", &b);

  if (a > b)
    {
      printf ("Ihre erste Zahl ist größer!");
    }
  else if (b > a)
    {
      printf ("Ihre zweite Zahl ist größer!");
    }
  else
    {
      printf ("Ihre beiden Zahlen sind gleich groß!");
    }

  return 0;
}
