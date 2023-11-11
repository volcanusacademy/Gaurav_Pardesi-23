#include <stdio.h>
// program for find area and perimeter of rectangle

float Area(float l , float w){
    float a;
    a = l*w;
    printf("area of rectangle is %f\n" ,a);
}

float perimeter(float l , float w){
    float p;
    p = 2*(l+w);
    printf("Perimeter of rectangle is %f" ,p);
}

int main()
{
  float l , w ;
  printf("enter the legth of rectangle: ");
  scanf("%f",&l);
  
  printf("enter the Width of rectangle: ");
   scanf("%f",&w);
  Area(l,w);
  perimeter(l,w);

    return 0;
}
