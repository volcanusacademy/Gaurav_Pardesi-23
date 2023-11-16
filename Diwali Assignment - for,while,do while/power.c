
#include <stdio.h>

int main() {int num , p,power=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter a power:");
    scanf("%d",&p);
    for(int i =1;i<=p;i++){
        power = power*num;
       
    }
    printf("power of %d is %d",num,power);

    return 0;
}