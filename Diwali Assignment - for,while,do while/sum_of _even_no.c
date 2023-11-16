#include <stdio.h>

int main() {int min_num ,max_num , sum=0;
    printf("Enter the lowest range: ");
    scanf("%d",&min_num);
    printf("Enter the maximum range: ");
    scanf("%d",&max_num);
    for(int i=min_num; i<=max_num;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("sum of all %d To %d is %d",min_num ,max_num ,sum);

    return 0;
}