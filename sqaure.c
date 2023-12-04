#include <stdio.h>
int square(int n){ // function for calculate the square of given number
    return n*n;
}
int main() {
   int result , num ;
   printf("Enter the number: \n");
   scanf("%d",&num);
   result = square(num); // function calling
   printf("square of %d is %d",num , result);
     return 0;
}