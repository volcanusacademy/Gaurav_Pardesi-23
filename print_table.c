#include <stdio.h>
// print table of given number

int main() {
   int num ; //declare  num variable
   
    printf("Enter The Number: ");
    scanf("%d",&num); // taking input from the user
    for (int i=1 ; i<=10;i++){ // for loop for print table of given number
        printf("%d X %d = %d\n",num,i,num*i);
    }

    return 0;
}