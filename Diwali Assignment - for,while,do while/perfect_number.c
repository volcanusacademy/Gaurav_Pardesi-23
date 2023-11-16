#include <stdio.h>

int main()
{   int num, sum;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i = 1 ; i<num;i++){
        if(num%i==0){
        sum+=i;
        // printf("%d\n",sum);
        }
    }
    if(num==sum){
        printf("%d is perfect number",num);
    }
    else{
        printf("%d is not perfect number",num);
    }

    return 0;
}
