#include <stdio.h>
// Program to find out whether entered number is even or odd

int main() {
    int num ;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }

    return 0;
}