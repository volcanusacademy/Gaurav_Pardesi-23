#include <stdio.h>
// Program to find out whether entered number is +ive or -ive
int main() {
    int num ;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(num>0){
        printf("%d is Postive",num);
    }
    else if (num<0){
        printf("%d is Negative",num);
    }
    else{
        printf("%d is not postive or negative");
    }

    return 0;
}