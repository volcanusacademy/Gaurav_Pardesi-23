#include <stdio.h>
// Write a program that accepts 6 digit number and find out the sum of first and last digit


int
main ()
{
  int num, arrange[6], temp = 0,sum=0,temp1; // declare all variables
  printf("Enter 6 digit number: ");
  scanf("%d",&num);
  temp1=num;
  for (int i = 0; i < 6; i++) // for loop for we convert 6 digit number in array 
    {
      temp = num % 10;
      arrange[i] = temp;
      num = num / 10;
    }
    sum=arrange[0]+arrange[5];
    printf("sum of 1st and last digit of %d is %d: ",temp1,sum);
    
  return 0;
}