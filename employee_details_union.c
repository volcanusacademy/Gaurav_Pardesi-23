#include <stdio.h>
#include<string.h>

// create union
union empDetails{
    char name[100];
    char address[100];
    int pincode;
};


int main() {
// declare union variable
union empDetails emp;
// getting input from the user & print desired output
printf("Enter employee name: ");
gets(emp.name);
printf("name of employee is: %s\n",emp.name);

printf("Enter employee address: ");
gets(emp.address);
printf("address of employee is: %s\n",emp.address);


printf("Enter address pincode: ");
scanf("%d",&emp.pincode);
printf("address pincode is: %d",emp.pincode);

    return 0;
}