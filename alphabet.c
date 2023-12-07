#include <stdio.h>
#include <ctype.h>
// Program to check whether entered character is an alphabet or not

int main() {
char word;
printf("Enter a word :");
scanf("%c",&word);

if (isalpha(word)){
     printf("%c is  alphabet", word);
 }
else{
      printf("%c is not  alphabet", word);

}
    return 0;
} 