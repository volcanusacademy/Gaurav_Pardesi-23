#include <stdio.h>
#include<string.h>

// create structur
struct empDetails{
    char name[100];
    // int age;
    char address[100];
    int pincode;
};


int main() {
// declare structure variable
struct empDetails emp;
// getting input from the user
printf("Enter employee name: ");
gets(emp.name);
// printf("Enter employee age: ");
// scanf("%d",&emp.age);
printf("Enter employee address: ");
gets(emp.address);
printf("Enter address pincode: ");
scanf("%d",&emp.pincode);

// print desired output
printf("name of employee is: %s\n",emp.name);
// printf("age of employee is: %d\n",emp.age);
printf("address of employee is: %s\n",emp.address);
printf("address pincode is: %d",emp.pincode);

    return 0;
}