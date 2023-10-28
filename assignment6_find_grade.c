#include<stdio.h>
void main(){
    int marks;
    printf("Enter Students marks:");
    scanf("%d",&marks);
    if (marks<40){
        printf("Your fail Due to less than 40 percent marks ");
    }
    else if (marks>=90 && marks<=100){
        printf("Congratulations your pass Your Grade is 'A+");
    }
    else  if (marks>=80 && marks<90){
        printf("Congratulations your pass Your Grade is 'A'");
    }
    else  if (marks>=70 && marks<80){
        printf("Congratulations your pass Your Grade is 'B+'");
    }
    else  if (marks>=60 && marks<70){
        printf("Congratulations your pass Your Grade is 'B'");
    }
    else  if (marks>=50 && marks<60){
        printf("Congratulations your pass Your Grade is 'C'");
    }
    else  if (marks>=40 && marks<50){
        printf("Congratulations your pass Your Grade is 'D'");
    }
    else{
        printf("Please enter valid marks");
    }
}