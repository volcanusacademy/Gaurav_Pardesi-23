#include <stdio.h>

int
GCD (int num1, int num2)
{
  int gcd = 0;
  for (int i = 1; i <= num1 && i <= num2; i++)
    {
      if (num1 % i == 0 && num2 % i == 0)
	{
	  gcd = i;
	}
    }
  printf ("Gretest common divisor is %d", gcd);


}

int
main ()
{
  int a, b;
  printf ("Enter first number: ");
  scanf ("%d", &a);
  printf ("Enter second number: ");
  scanf ("%d", &b);

  GCD (a, b);


  return 0;
}
