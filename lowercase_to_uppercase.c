#include <stdio.h>
#include <ctype.h>
// Program to check whether entered character is in lowercase or not and if yes, then convert it into uppercase

int main() {
char word , upperword;
printf("Enter word :");
scanf("%c",&word);

 if(islower(word)){
        printf("%c is Lowercase\n",word);
 upperword = toupper(word);
 printf("We convert '%c' To '%c' ",word,upperword);
 }
 else{
     printf("%c is Uppercase",word);
 }

    return 0;
} 