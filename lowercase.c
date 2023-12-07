#include <stdio.h>
#include <ctype.h>
// Program to check whether entered character is in lowercase or not 

int main() {
char word;
printf("Enter  word :");
scanf("%c",&word);

 if(islower(word)){
     printf("%c is Lowercase  \n",word);
 }
else{
    printf("%c is not  Lowercase  \n",word);
}
    return 0;
} 