#include<stdio.h>
void sum(){
    int num1 , num2;
    printf("Enter First number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);
    printf("\n  sum of %d and %d is %d",num1,num2,num1+num2);
    
}
void sub(){
    int num1 , num2;
    printf("Enter First number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);
     printf("\n  subtraction of %d and %d is %d",num1,num2,num1-num2);
}
void mul(){
    int num1 , num2;
    printf("Enter First number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);
     printf("\n  multipication of %d and %d is %d",num1,num2,num1*num2);
}

void div(){
    int num1 , num2;
    printf("Enter First number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);
     printf("\n  division of %d and %d is %d",num1,num2,num1/num2);
}
    


void main (){
    int option;
    printf("~~~~~~~~~~~~ Welcome To Our Calculater ~~~~~~~~~~~~\n");
    
    printf("press 1 for addition\n press 2 for subtraction \n press 3 for multipication \n press 4 for division\n");
    
    printf("Choose your Option :");
    scanf("%d" ,&option);
    
    switch(option){
        case 1:sum();
        break ;
        
         case 2:sub();
        break ;
        
         case 3:mul();
        break;
        
         case 4:div();
        break ;
        
         default:printf("invalid option");
        
    }
}