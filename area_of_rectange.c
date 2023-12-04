#include <stdio.h>
// program for find area of rectangle

float Area(float l , float w){ // function for calculate area of rectangle
    float a;
   return a = l*w;
}
int main()
{
  float l , w , result;
  printf("enter the legth of rectangle: ");
  scanf("%f",&l);
  printf("enter the Width of rectangle: ");
   scanf("%f",&w);
  result = Area(l,w); // function calling
  printf("area of rectange is %f",result);

    return 0;
}