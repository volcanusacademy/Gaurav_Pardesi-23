
#include <stdio.h>

int main() {
    int h;
    printf("enter Height :");
    scanf("%d",&h);
    for (int i=1 ; i<=h;i++){
        // printf(" ");
         
        for(int j = 1 ; j<=i; j++){
        printf("*  ");
    }
       printf("\n");
    }

    return 0;
}