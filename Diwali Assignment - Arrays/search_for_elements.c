#include <stdio.h>
//  program for search an elements of array 
int main()
{   int rl , temp=0;
    printf("Enter the Roll no: ");
    scanf("%d",&rl);
    int Roll_no[10]={10 ,12 , 25 ,36 , 66,55,58 ,8 ,11 ,32 };
    for (int i=0;i<=10;i++){
        if(Roll_no[i]==rl){
            temp++;
        }}
 if(temp>0){
            printf("Congratulation your selected your roll number in the list\n");
            
        }
else{
    printf("your not selected your roll number not in the list\n");
}
    return 0;
}
