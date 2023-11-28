#include <stdio.h>

void printMultiplicationTable(int n){
    for (int i=1; i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printMultiplicationTable(n);
    return 0;
}