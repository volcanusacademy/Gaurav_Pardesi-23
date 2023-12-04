#include <stdio.h>
int main() {
   int current_month , last_month , total_unit; // declare all required variables
   printf("Enter last Month unit : ");
   scanf("%d",&last_month);
   printf("Enter current Month unit : ");
   scanf("%d",&current_month);
   total_unit=current_month+last_month;
   printf("Total unit: %d\n",total_unit);
   if(total_unit>0&&total_unit<=100){ // create if else ladder for get desired output
       printf("Your bill amount is: %d\n",total_unit*2);
   }
   else if (total_unit<=200){
       printf("Your bill amount is: %d\n",total_unit*3);
   }
   else if (total_unit<=300){
       printf("Your bill amount is: %d\n",total_unit*4);
   }
   else{
       printf("Your bill amount is: %d\n",total_unit*5);
   }

    return 0;
}