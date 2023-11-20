#include<stdio.h>
  int sum=0;
  void main(){
      int mat[3][3];
  for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
             printf("Enter the value of matrix of index Row:%d Coloumn:%d:",i,j);
            scanf("%d",&mat[i][j]);
      }
  }
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
            //  printf("Enter the value of matrix :");
            printf("%d ",mat[i][j]);
            sum = sum+mat[i][j];
      }
      printf("\n");
  }
    printf("sum of matrix is: %d",sum);
  }