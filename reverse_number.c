#include <stdio.h>
//WAP to reverse 5 digit number

int
main ()
{
  int num, arrange[5], temp = 0; // declare all variables
  printf("Enter 5 digit number: ");
  scanf("%d",&num);
  for (int i = 0; i < 5; i++) // using for loop for reverse  a number and store it in array
    {
      temp = num % 10;
      arrange[i] = temp;
      num = num / 10;
    }
 
  for (int i = 0; i < 5; i++) // for loop for print output 
    {
      printf("%d",arrange[i]);
    }
  return 0;
}