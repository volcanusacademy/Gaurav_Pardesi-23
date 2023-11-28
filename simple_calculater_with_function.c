#include <stdio.h>
float sum (float a, float b)
{
  printf ("\nsum of %f and %f is %f", a, b, a + b);
}
float sub (float a, float b)
{
  printf ("\nsubtraction of %f and %f is %f", a, b, a - b);
}
float mul (float a, float b)
{
  printf ("\nmultipication  of %f and %f is %f", a, b, a * b);
}
float Div (float a, float b)
{
  printf ("\ndivision of %f and %f is %f", a, b, a / b);
}
int
main ()
{
  float num1, num2;
  int option;

  printf ("!!!~~~~~~~~~Welcome To Our mini Calculater~~~~~~~~~~~~!!!\n");
  printf(" Press 1 for addition\n Press 2 for subtraction\n Press 3 for multipication\n Press 4 For division\n");
  scanf ("%d", &option);
  printf ("Enter the first number: \n");
  scanf ("%f", &num1);
  printf ("Enter the second number: \n");
  scanf ("%f", &num2);

  switch (option)
    {
    case 1:
      sum (num1, num2);
      break;
    case 2:
      sub (num1, num2);
      break;
    case 3:
      mul (num1, num2);
      break;
    case 4:
      Div (num1, num2);
      break;
    default:
      printf ("Enter correct choice");
    }



  return 0;
}
