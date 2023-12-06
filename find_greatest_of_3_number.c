#include <stdio.h>
//  Program to find out greater number among three numbers and test for all possible equalities
int main() {
    int num1 , num2 , num3 ;
    printf("Enter first Number: ");
    scanf("%d",&num1);
    printf("Enter second Number: ");
    scanf("%d",&num2);
    printf("Enter third Number: ");
    scanf("%d",&num3);
    
    if (num1>num2 && num1>num3){
        printf("%d is greatest number",num1);
    }
    else if (num2>num1 && num2>num3){
        printf("%d is greatest number",num2);
    }
    else{
        printf("%d is greatest number",num3);
    }
    
    

    return 0;
}