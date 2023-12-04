#include <stdio.h>
// program for find volume of cuboid

float volume(float l , float w , float h){ // function for calculate volume of cuboid
    float v;
   return v = l*w*h;
}
int main()
{
  float l , w ,h, result;
  printf("enter the legth of cuboid: ");
  scanf("%f",&l);
  printf("enter the Width of cuboid: ");
  scanf("%f",&w);
  printf("enter the height of cuboid: ");
  scanf("%f",&h);
  result = volume(l,w,h); // function calling
  printf("volume of cuboid is %f",result);

    return 0;
}