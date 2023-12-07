#include <stdio.h>
#include<string.h>
int main() {
    int check ;
char str1[100]="Vocanus";
char str2[100]="Academy";
char str3[100];
// calculate length
printf("legth of string is %d\n",strlen(str1)); 
//concatenate string
strcat(str1,str2); 
printf("string after concatenate: %s",str1);
 // copy string
strcpy(str3,str2);
printf("\n%s\n",str3);
// compare string
check = strcmp(str2, str1);
if(check==0){
    printf("strings are equal");
}
else{
        printf("strings are not equal");
}


    return 0;
}