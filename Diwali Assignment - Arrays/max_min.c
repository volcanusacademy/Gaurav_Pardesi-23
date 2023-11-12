#include <stdio.h>

int max_min_list(int num){ // create function for find minimum and maximum value of array
    int temp;
    int list[num];
    for(int i=0;i<num;i++){ //for take input from user
        printf("Enter the value of array in index:%d\n",i);
        scanf("%d",&list[i]);
    } 
    printf("Your list:\n"); // print list
    for(int i=0;i<num;i++){
       
        printf(" %d ",list[i]);
    }

for (int i=0; i<num ;i++){ // sort list 
    for(int j=i+1; j<num;j++){
        if(list[i]>list[j]){
            temp = list[i];
            list[i]=list[j];
            list[j]=temp;
        }}
    }
      printf ("\nsmalest number of the list is %d \n", list[0]);
      printf ("largest number of the list is %d \n", list[num-1]);
}

int main() {
    int n;
    printf("Enter the size of list: ");
    scanf("%d",&n);
    max_min_list(n);

    return 0;
}