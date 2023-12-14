#include <stdio.h>
// C Program to generate Fibonacci Triangle
int main() {
    int num=5;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}