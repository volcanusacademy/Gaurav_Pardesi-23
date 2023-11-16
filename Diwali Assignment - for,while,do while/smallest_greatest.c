#include <stdio.h>
int main() {
   
    int num;
    printf("Enter the size of list: ");
    scanf("%d",&num);
    int temp , i;
    int list[num];
    i =0;
    while(i<num){ //for take input from user
         printf("Enter the value of array in index:%d\n",i);
        scanf("%d",&list[i]);
        i++;}
        
    printf("Your list:\n"); // print list
    
     i = 0;
    while(i<num){
          printf(" %d ",list[i]);
          i++;
        
    }
     i = 0;
    while(i<num){
        int j =i+1;
        while(j<num){
             if(list[i]>list[j]){
            temp = list[i];
            list[i]=list[j];
            list[j]=temp;}
            j++;
        }
        i++;
    }
      printf ("\nsmalest number of the list is %d \n", list[0]);
      printf ("largest number of the list is %d \n", list[num-1]);

    return 0;
}