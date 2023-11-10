

#include <stdio.h>

void main()
{ int number;
do{
    printf("\nEnter number :");
    scanf("%d",&number);
    for (int i=1; i<=31;i=i+7){
        if(i==number){
            printf("Sunday");
        }
    }
    for (int i=2; i<=31;i=i+7){
        if(i==number){
            printf("monday");
        }
    }
    for (int i=3; i<=31;i=i+7){
        if(i==number){
            printf("tuesday");
        }
    }
    for (int i=4; i<=31;i=i+7){
        if(i==number){
            printf("wednesday");
        }
    }
    for (int i=5; i<=31;i=i+7){
        if(i==number){
            printf("thursday");
        }
    }
    for (int i=6; i<=31;i=i+7){
        if(i==number){
            printf("friday");
        }
    }
    for (int i=7; i<=31;i=i+7){
        if(i==number){
            printf("saturday");
        }
    }
}
    while(number!=0);
    

}
