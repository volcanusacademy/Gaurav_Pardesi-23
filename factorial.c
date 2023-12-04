#include<stdio.h>
  int recursive( int n) { // function for calculate factorial using recursion
    if (n>=1)
        return n*recursive(n-1);
    else
        return 1;
}
int main() {
     int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, recursive(n)); // print desired output
    return 0;
}
