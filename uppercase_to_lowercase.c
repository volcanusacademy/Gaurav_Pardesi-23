#include <stdio.h>
#include <ctype.h>
// Program to check whether entered character is in uppercase or not and if yes, then convert it into lowercase

int main() {
char word , smallword;
printf("Enter word :");
scanf("%c",&word);

 if(isupper(word)){
        printf("%c is Uppercase\n",word);
 smallword = tolower(word);
 printf("We convert '%c' To '%c' ",word,smallword);
 }
 else{
     printf("%c is lowercase",word);
 }

    return 0;
} 