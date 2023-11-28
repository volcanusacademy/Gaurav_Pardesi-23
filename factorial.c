#include<stdio.h>
  int recursive( int n) {
    if (n>=1)
        return n*recursive(n-1);
    else
        return 1;
}
int main() {
     int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, recursive(n));
    return 0;
}


