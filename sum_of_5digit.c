#include <stdio.h>
//  Write a program that accepts 5 digit number and find out the sum of all the individual digits

int
individual_digit_sum(int n) // function for sum of individuals digit
{
  int sum = 0, rm=0 ,temp;
  temp = n ;
  while (n!= 0) //while loop for break numbers in sigle digits
    {
      rm = n%10; 
      sum = sum + rm;
      n /= 10;
    }
    printf("sum of all individuals digit of %d is: %d ",temp,sum);
}

int main() {
    int num ;
    printf("Enter the 5 digit number: ");
    scanf("%d",&num);
     individual_digit_sum(num); // functiom calling

    return 0;
}