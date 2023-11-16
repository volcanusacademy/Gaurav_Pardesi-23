#include <stdio.h>

int printSum(int a, int b){
    printf("sum of %d and %d is %d",a , b ,a+b);
}

int main() {
    int a , b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
  printSum(a,b);

    return 0;
}