#include <stdio.h>
int main() {
    int l , m ,check;
    printf("enter lowest range:");
    scanf("%d",&l);
    printf("enter max range :");
    scanf("%d",&m);
    for (int i=l ; i<=m;i++){
        check=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                check++;
                break;
            }
        }
        if(check<1){
            printf("\n%d is prime number",i);
        }
        
    }
 

    return 0;
}