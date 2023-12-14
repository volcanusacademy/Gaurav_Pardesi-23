#include <stdio.h>
// C program using array of structure to save student details- name , id, marks Logic based 
struct student_details{
    char name[100];
    int roll_no , marks;
    
};

int main() {
    int num;
printf("Enter number of student: ");
scanf("%d",&num);
int i=1;
struct student_details s[i];
do{  
    printf("Enter %d student name: ",i);
    scanf("%s",&s[i].name);
    printf("Enter student roll number: ");
    scanf("%d",&s[i].roll_no);
    printf("Enter student marks: ");
    scanf("%d",&s[i].marks);
    printf("(%d) student name is  %s \n",i,s[i].name);
    printf("(%d) student roll number is  %d \n",i,s[i].roll_no);
    printf("(%d) student marks is  %d \n",i,s[i].marks);
 
    i++;}
 while(i<=num);
    return 0;
}#include <stdio.h>
// C program using array of structure to save student details- name , id, marks Logic based 
struct student_details{
    char name[100];
    int roll_no , marks;
    
};

int main() {
    int num;
printf("Enter number of student: ");
scanf("%d",&num);
int i=1;
struct student_details s[i];
do{  
    printf("Enter %d student name: ",i);
    scanf("%s",&s[i].name);
    printf("Enter student roll number: ");
    scanf("%d",&s[i].roll_no);
    printf("Enter student marks: ");
    scanf("%d",&s[i].marks);
    printf("(%d) student name is  %s \n",i,s[i].name);
    printf("(%d) student roll number is  %d \n",i,s[i].roll_no);
    printf("(%d) student marks is  %d \n",i,s[i].marks);
 
    i++;}
 while(i<=num);
    return 0;
}