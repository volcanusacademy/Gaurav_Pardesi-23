#include <stdio.h>
//C program to find the size of a union
void main()
{
    union test
    {
         int n ;
      
    };
    union test t;
    printf("The size of union = %d\n", sizeof(t));
    /*  initialization */
    t.n = 25;
    printf("value of num is %d ", t.n);
 
}