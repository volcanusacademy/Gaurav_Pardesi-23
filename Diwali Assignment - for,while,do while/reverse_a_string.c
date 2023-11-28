#include <stdio.h>
#include <string.h> //for find length of string
// program for  reverse a string

int main() {
    int len ;
    char name[20];
    printf("Enter your name:");
    scanf("%s",&name);
    len=strlen(name);
    
    for (int i=len;i!=-1;i--){
        printf("%c",name[i]);
    }


    return 0;
}