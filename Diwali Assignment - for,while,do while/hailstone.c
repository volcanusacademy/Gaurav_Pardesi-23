
#include <stdio.h>

int main() {
 int n =6,i=1 ,temp,temp1;
 while(n>1){
     if(n%2==0){
        n= n/=2;}
     
     else{
         n= 3*n+1;}
     
     i++;
     printf("%d ",n);
 }

    return 0;
}