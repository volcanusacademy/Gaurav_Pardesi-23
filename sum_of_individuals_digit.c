#include <stdio.h>
int
individual_digit_sum(int n) // function for sum of individuals digit
{
  int sum = 0, rm=0;
  while (n!= 0) //while loop for break numbers in sigle digits
    {
      rm = n%10; 
      sum = sum + rm;
      n /= 10;
    }
if (sum>9){ // if condition for sum of 5 digit number if its greater than 9 then again find sum of all individual digit
    individual_digit_sum (sum); // here we use recursion 
}
else if (sum<=9){
    printf("%d",sum); // for print desired output
}
}

int main() {
    int num ;
    printf("Enter the 5 digit number: ");
    scanf("%d",&num);
     individual_digit_sum(num); // functiom calling

    return 0;
}