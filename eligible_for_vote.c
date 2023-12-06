#include <stdio.h>
// Program to take nationality as ‘I’ or ‘i’ for Indian from user, and if it is an Indian the take age from it and checks whether he or she is eligible to vote or not.
int main() {
    int option , age;
    printf("Are you Indian press 1 for yes  2 for no: \n");
    scanf("%d",&option);
    if(option==1){
        printf("Enter your age: ");
        scanf("%d",&age);
        if(age>=18){
            printf("!! Your eligible for voting !!!");
        }
        else{
            printf("!!! You need to wait untill your 18 years !!!");
        }
        
    }
    else if (option==2){
        printf("!!! Thanks to visit in india have a nice day !!!");
    }
    else{
        printf("!! Invalid choice !!");
    }

    return 0;
}