#include <stdio.h>
#include<math.h>
// Compound interest program
float  cpc(float p,float r,float t){
    float a,ci;
    a = p*((pow(1+(r/100),t)));
   ci=a-p;
    return ci;
}

void main(){
    float p , r, t ,c;

    printf("\nEnter Principle Amaount:");
    scanf("%f",&p);
    printf("\nEnter rate Amaount:");
    scanf("%f",&r);
    printf("\nEnter time Amaount:");
    scanf("%f",&t);
    // cpc(p,r,t);
    c = cpc(p,r,t);
  printf("%f",c);

}