#include <stdio.h>
//  Program to check whether entered character is a $ or @ by its ascii value
int main() {
int num;
printf("Enter ascii value:");
scanf("%d",&num);
if(num==36){
    printf("yes its $");
} 
else if (num==64){
    printf("yes its @");
}

else{
    printf("no %c it's not $ and @ " ,num);
}
    return 0;
}