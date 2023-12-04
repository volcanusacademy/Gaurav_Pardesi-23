#include <stdio.h>
int main() {int num , n  , arm=0 ,rm ,sum;
    printf("Enter the number: ");
    scanf("%d",&n);
    num=n;
 while (num != 0)
    {
      rm = num % 10;
      arm=rm*rm*rm;
      sum= sum+arm;
      num /= 10;
    }
    if (sum==n){
        printf("%d is armstrong number",n);
    }
    else{
        printf("%d is not armstrong number",n);
    }


    return 0;
}