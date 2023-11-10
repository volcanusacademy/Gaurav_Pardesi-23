#include <stdio.h>

// Student Grading 

int main()
{
    int marks ;
    printf("Enter the student marks :");
    scanf("%d",&marks);
    if (marks>=90 && marks<=100 ){
        printf("Your Grade is 'A'");
    }
    
    else if (marks>=80 && marks<90 ){
        printf("Your Grade is 'B'");
    }
    else if (marks>=70 && marks<80){
        printf("Your Grade is 'C'");
    }
    else if (marks>=60 && marks<70){
        printf("Your Grade is 'D'");
    }
    else if (marks<60){
        printf("Your Grade is 'f'");
    }
    else{
        printf("Please check and enter correct marks");
    }

    return 0;
}
