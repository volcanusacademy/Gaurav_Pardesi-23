#include <stdio.h>
int main() {
    char first_name[20] , last_name[20];
    int roll_no ;
    float marks ;
    printf("Enter first name: \n");
    scanf("%s",&first_name);
    printf("Enter last name: \n");
    scanf("%s",&last_name);
    printf("Enter Roll no: \n");
    scanf("%d",&roll_no);
    printf("Enter marks : \n");
    scanf("%f",&marks);
    printf("\n");
    printf("\nstudent name is: %s %s\n",first_name , last_name);
    printf("student roll number is: %d\n",roll_no);
    printf("Marks of student is: %f\n",marks);
    return 0;
}
