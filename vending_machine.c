#include <stdio.h>

int main()
{ int  temp,pin=1551;
float product ,cardbal=3000;
    printf("Enter produsct price: \n");
    scanf("%f",&product);
    printf("Enter your pin: \n");
    scanf("%d",&temp);
    if(temp!=pin){
        printf("You enter Wrong pin please try again ");
    }
    else if (product<=cardbal){
        printf("Your purchase successfully");
    }
    else{
           printf("Your Account does not have sufficient fund");
        
    }
    
    return 0;
}
