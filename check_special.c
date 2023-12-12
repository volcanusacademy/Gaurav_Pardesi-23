#include <stdio.h>
// Program to check whether entered character falls in the category of special symbol or not
int main() {
   char special[20]="!@#$%^&*()_+";
   char user[10];
   int c=0;
   printf(" enter character :");
   scanf("%c",&user);
   for(int i=0;i<20;i++){
       if(special[i]==user[0]){
           c++;}}
   if(c>0){
       printf("'%c' is special character",user[0]);
   }
   else{
       printf("'%c' not is special character",user[0]);
   }

    return 0;
}