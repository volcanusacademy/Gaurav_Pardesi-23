#include <stdio.h>
#include <ctype.h>
// Program to check whether entered character is a digit or not and if yes, then replace it by *

int main() {
int word;
printf("Enter word:");
scanf("%c",&word);
if (isdigit(word)){
     printf("%c is  digit \n", word);
     printf("We convert %c to '*' ",word);
     word ="*";
 }
else{
      printf("%c is not  digit ", word);

}
    return 0;
} 