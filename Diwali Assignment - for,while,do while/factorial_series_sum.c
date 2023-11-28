#include <stdio.h>

int main() {
    int num ,temp=1 ;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
       temp = i * temp ;
    }
    printf("%d",temp);
      
    

    return 0;
}