#include <stdio.h>
#include <ctype.h>
// Program to check whether entered character is a digit or not

int main() {
char word;
printf("Enter word:");
scanf("%c",&word);

if (isdigit(word)){
     printf("%c is  digit ", word);
 }
else{
      printf("%c is not  digit ", word);

}
    return 0;
} 