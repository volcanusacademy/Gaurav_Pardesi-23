#include <stdio.h>
// Write a program to print numbers from 1 to 100 skipping all the multiples of 3 by using "continue" statement.

int main() {
    for (int i=1;i<=100;i++){ //for loop for print 1 to 100 numbers
        if (i%3==0){//if condition for skip the value multiple of 3
            continue ;
        }
        printf("%d\n",i); // print desired output
    }
    return 0;
}