#include <stdio.h>
// Program to find out compound interest if principal is greater than or equals to 500 otherwise find out simple interest

// function for calculate simple intrest
float simpleIntrest(float p , float r , float t){
    float a ;
    // a= p*(1+(r*t));
    a =(p*r*t)/100;
    printf("simple Intrest :%f", a);
}
// function for calculate compound intrest
float  compoundIntrest(float p,float r,float t){
    float a,ci;
    a = p*((pow(1+(r/100),t)));
   ci=a-p;
    printf("Compound Intrest: %f", ci);
}

int main() {
     float principle , rate, Time ; // variables for taking value from the user
    printf("\nEnter Principle Amaount:");
    scanf("%f",&principle);
    printf("\nEnter rate Amaount:");
    scanf("%f",&rate);
    printf("\nEnter time :");
    scanf("%f",&Time);
    // apply if condition if principle amount is greater than or equal to 500 its calculate compound intrest else its calculate simple intrest
    if(principle>=500){
        compoundIntrest(principle ,rate ,Time);
    }
    else{
        simpleIntrest(principle,rate,Time);
    }

    return 0;
}