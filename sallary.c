#include <stdio.h>

int main() {
    float basicSallary , pf ,gs , ns ,ta;
    float da=500; //DA(Dearness Allowance)
    printf("enter sallary: ");
    scanf("%f",&basicSallary);
    pf= (basicSallary*7.8)/100 ;  //PF(Provident Fund)
    ta= (basicSallary*10)/100 ; // TA(Travel Allowance)  
    gs=basicSallary+da+ta; // GS(gross salary )
    ns=gs-pf; //net salary.
    printf("basic sallary is: %f\n",basicSallary);
    printf("gross  sallary is: %f\n",gs);
    printf("net sallary is: %f\n",ns);
    return 0; 
}