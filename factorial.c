#include <stdio.h>
// program for find factorial of given number
int
Recursive (int num)
{
  int temp = 1;
  for (int i = 1; i <= num; i++)
    {
      temp = i * temp;
    }
  printf ("Factorial of %d is %d ", num, temp);
}

int
main ()
{
  int num;
  printf ("Enter the value: \n");
  scanf ("%d", &num);
  Recursive (num);

  return 0;
}
