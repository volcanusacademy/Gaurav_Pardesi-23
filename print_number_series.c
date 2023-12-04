#include <stdio.h>

// Write a program in c to print integers and stops when it finds the multiple of 9 use break statement

int main() {
    int num , start_range , end_range;// declare all variables here 
    printf("Enter starting range : \n");
    scanf("%d",&start_range); // taking minimum range from the user
    printf("Enter maximum range: \n");
    scanf("%d",&end_range); //taking maximum range from te user
    printf("Enter the number which you want to stop: \n");
    scanf("%d",&num);// taking number which we want stop from the user
    
    for(int i=start_range;i<=end_range;i++){ // for loop to print all numbers
        if(i%num==0){ // if condition for using break when it finds the multiple of number(which we want to stop);
            break ;
        }
        printf("%d\n",i); // print the desired output
    }

    return 0;
}