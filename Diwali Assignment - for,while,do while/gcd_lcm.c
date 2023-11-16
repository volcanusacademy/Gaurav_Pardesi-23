#include <stdio.h>

int gcd_lcm(int num1, int num2)
{
  int gcd = 0,lcm =0, i=1;
while(i<=num1 && i<=num2)
    {
      if (num1 % i == 0 && num2 % i == 0)
	{
	  gcd = i;
	}
lcm = (num1*num2)/gcd;

	i++;
	
    }
    
  printf ("gcd is %d\n",gcd);
printf("lcm is %d",lcm);
  


}

int
main ()
{
  int a, b;
  printf ("Enter first number: ");
  scanf ("%d", &a);
  printf ("Enter second number: ");
  scanf ("%d", &b);

  gcd_lcm(a,b);


  return 0;
}