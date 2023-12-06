#include <stdio.h>
// Program to check whether first number is divisible by second or not
int main() {
    int num1 , num2 ;
    printf("Enter first Number: ");
    scanf("%d",&num1);
    printf("Enter second Number: ");
    scanf("%d",&num2);
    if(num1%num2==0){
        printf("Yes Number is divisible ");
    }
   
    else{
        printf("No Number is Not divisible ");
    }

    return 0;
}