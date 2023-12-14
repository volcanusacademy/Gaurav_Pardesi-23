#include <stdio.h>
#include<string.h>
// C program that counts the number of words, sentences, and characters in a given input text.
int main() {
   char str[100];
  double len=0,count=0 , count2=0;
   printf("Enter string :");
   scanf("%[^\n]s",&str);
  len=strlen(str);
  for(int i=0;i<len;i++){
   if(str[i]==' '){
          count++;
      }
    if(str[i] == '.' || str[i] == '?' || str[i] == '!') {
        count2++;
    }
  }
  printf("number of character in string is: %lf\n",len-count);
  printf("number of words in string is: %lf\n",count+1);
   printf("number of sentance in string is: %lf",count2+1
   );
    
 

    return 0;
}