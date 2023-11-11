#include <stdio.h>
//   program for identify a given number is Palindrome or not

int
Palindrome (int num)
{
  int temp = 0, rm, temp2;
  temp2 = num;
  while (temp2 != 0)
    {
      rm = temp2 % 10;
      temp = temp * 10 + rm;
      temp2 /= 10;
    }
  if (num == temp)
    {
      printf ("%d is Palindrome Number ", num);
    }
  else
    {
      printf ("%d is Not Palindrome Number ", num);
    }
}

int
main ()
{
  int num;
  printf ("Enter number: ");
  scanf ("%d", &num);
  Palindrome (num);

  return 0;
}
