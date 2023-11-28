#include <stdio.h>

int main()
{   int sum ,less , result ,n;
    printf("Enter the max range : ");
    scanf("%d",&n);
    
    for (int  i=1 ; i<=n ;i++){
        if (i%2==0){
           less = less+i;
        }
        else{
        sum = sum+i;
        }
    }
    result=sum-less;
    printf("%d \n", result);
    
    
  
   
   
    return 0;
}
