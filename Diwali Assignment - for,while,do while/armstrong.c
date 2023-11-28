
#include <stdio.h>
int main() {int n ;
    printf("Enter the max range: ");
    scanf("%d",&n);
for (int i = 1 ; i<=n; i++){
    int r = 0 , j ,sum=0, rm ,rm1,count=0 ,sum1=0;
    
    for( j=i; j!=0;j=j/10){
        r= j%10;
        rm= r*r*r;
        rm1 = r*r*r*r;
        sum = sum+rm; 
        sum1=sum1+rm1;
       
    } 
    if(i<10){
        count++;
    }
    else if(i==sum){
    count++;}
    else if (i==sum1){
        count++;
    }
    
    
    if(count>0){
        printf("%d is armstrong number\n",i);
    }
      
     
    
}

    return 0;
}