#include <stdio.h>
// Add two complex numbers using a C program.
int main() {
int a ,b; // real number
int ai , bi ; // imagenery number 
printf("Enter first real number: ");
scanf("%d",&a);
printf("Enter first imagenery number: ");
scanf("%d",&ai);
printf("Enter second real number: ");
scanf("%d",&b);
printf("Enter second imagenery number: ");
scanf("%d",&bi);

printf("addition of  %d+%di and %d+%di = %d+%di",a,ai,b,bi,a+b,ai+bi);

    return 0;
}