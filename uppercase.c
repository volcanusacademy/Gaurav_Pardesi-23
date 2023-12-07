#include <stdio.h>
#include <ctype.h>
// Program to check whether entered character is in uppercase or not 

int main() {
char word;
printf("Enter  word :");
scanf("%c",&word);

 if(isupper(word)){
     printf("%c is  Uppercase  \n",word);
 }
else{
    printf("%c is not  Uppercase  \n",word);
}
    return 0;
} 