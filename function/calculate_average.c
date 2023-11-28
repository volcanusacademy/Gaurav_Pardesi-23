#include <stdio.h>

float calculateAverage(float a, float b){
    return  (a+b)/2;
}

int main() {
    float a , b;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
  printf("%f",calculateAverage(a,b));

    return 0;
}