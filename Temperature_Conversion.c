#include <stdio.h>
// fahrenheit to celsius and celsius to fahrenhiet
// F = (C x 1.8)+32 formula for celsius to fahrenheit 
// C = (F-32)/1.8 formula for fahrenheit to celsius

float celsius_to_f(float c){   
    float f  ;
    f = (c*1.8)+32;
    printf("your fahrenheit value is %f\n",f);
}
float f_to_celsius(float f){
    float  c ;
    c=(f-32)/1.8;
    printf("your celsius value is %f",c);
}


int main() {
    float f , c ;
   printf("Enter the celsius value: ");
   scanf("%f",&c);
   printf("Enter the Farhrenheit value: ");
   scanf("%f",&f);
   celsius_to_f(c);
   f_to_celsius(f);
   

    return 0;
}