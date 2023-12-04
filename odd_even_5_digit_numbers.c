#include <stdio.h>
// program to count even and odd numbers in 5 digit numbers
int main() {
    int num , temp[5] , rm=0;
    printf("Enter 5 digits number: ");
    scanf("%d",&num);
    for (int i=0;i<5;i++){
       rm = num%10;
       num = num/10;
       temp[i]=rm;  // convert number into array
    }
    int even=0, odd =0;
    for (int i=0 ; i<5;i++){
        if(temp[i]%2==0){ // check all array elements if number %2==0 thats mean number is even
        even++;
        }
        else{
            odd++;}
            }
printf("Total %d numbes is even \n",even);    
printf("Total %d numbes is odd \n",odd);
return 0;
}