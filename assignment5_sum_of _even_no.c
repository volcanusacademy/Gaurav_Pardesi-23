#include<stdio.h>
// calculate the sum of even numbers
void main (){
    int start,end,sum;
    printf("Enter Start number :");
    scanf("%d", &start);
    printf("Enter End number :");
    scanf("%d", &end);
    
for(start;start<=end;start++){
    if (start%2==0){
        sum+=start;  }
}
printf("%d",sum);
}