#include<stdio.h>
void main(){
    int  age ;
    printf("enter your age :");
    scanf("%d" ,&age);
   
    if (age>=18){
        printf(" your eligible for driving test\n" );
        printf("Did you have bike\n");
        printf("press 1 for yes and 0 for no: ");
        int ans;
        scanf("%d" ,&ans);

        if(ans==1){

            
            printf("Your ready for test");
        }
        else{
            printf("You need bike for give test please arrange");
        }
        
    }
    else {
        printf(" your not eligible for driving test");
    }
        
    }
    
