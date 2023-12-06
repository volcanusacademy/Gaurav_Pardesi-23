#include <stdio.h>
// Program to find out whether entered number lies in between 50 and 100 or not
int main() {
    int num,check=0;
    printf("Enter first Number: ");
    scanf("%d",&num);
    for(int i = 50 ;i<=100;i++){
        if(i==num){
            check++;
        }
    }
    if(check>0){
        printf("Yes Number in under range");
    }
    else{
        printf(" Number not under range");
    }
   

    return 0;
}