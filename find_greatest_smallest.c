#include <stdio.h>
// WAP to accept 4 digit number and find out the greatest and smallest digit from it
int main() {
   int num , num_arr[4] , rm=0, temp=0; // declare all required variables
   printf("enter the number: "); 
   scanf("%d",&num); // take number from the user 
   for (int i = 0 ; i<4 ; i++){ // using for loop for converting 4 digit number into array
       rm=num%10;
       num_arr[i]=rm;
       num=num/10;
   }
   for (int i = 0 ; i<4 ; i++){ // for loop for short array
       for (int j = i+1 ; j<4 ; j++){
           if(num_arr[i]>num_arr[j]){
               temp=num_arr[i];
              num_arr[i]=num_arr[j];
              num_arr[j]=temp;
           }
       }
   }
printf("%d is smallest: \n",num_arr[0]); // print smallest number
printf("%d is greatest: \n",num_arr[3]); // print greatest number
   

    return 0;
}