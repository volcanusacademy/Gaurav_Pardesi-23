#include <stdio.h>
// Create a c program to print spiral matrix 

int main() {
   int mat[3][3]={{1,2,3,},{4,5,6},{7,8,9}};
   printf(" simple matrix: \n");
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           printf("%d ",mat[i][j]);
       }
       printf("\n");
   }
    printf("spiral matrix: \n");
    
   for(int i=0;i<3;i++){
    printf("%d ",mat[0][i]);
   }
   printf("\n");
   for(int i=1;i<=3;i++){
       if(i==3){
           printf("%d ",mat[2][1]);
       }
       else{
       printf("%d ",mat[i][2]);}
   }
   printf("\n");
   for(int i=0;i<3;i++){
        if(i==0){
           printf("%d ",mat[2][0]);
        }
       else{
       printf("%d ",mat[1][i-1]);}
   }
    return 0;
}