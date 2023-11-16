#include <stdio.h>

int calculateSum(int a, int b){
     return a+b;
    
}

int main() {
       int a , b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    
  printf("sum of %d and %d is %d",a,b,calculateSum(a,b));

    return 0;
}