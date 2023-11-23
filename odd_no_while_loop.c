#include<stdio.h>
// print all odd numbers 1 to 100 using while loop
void main(){
    int i=0;
    while(i<=100){
        i++;
        if (i%2!=0){
            printf("\n%d" , i);}
    }
}