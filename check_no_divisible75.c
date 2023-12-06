#include <stdio.h>
// Program to check whether entered number is divisible by 75 or not
int main() {
    int num ;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(num%75==0){
        printf("Yes %d is divisible by 75",num);
    }
   
    else{
        printf(" %d is not divisible by 75",num);
    }

    return 0;
}