#include <stdio.h>

int main() {
  int amount , note1000=0,note500=0,note100=0,note50=0,
  note20=0,note10=0,note5=0,coin2=0,coin1=0  ; 
  
  printf("Enter amount: ");
  scanf("%d",&amount);
  printf("%d\n",amount);
  if(amount>=1000){
      note1000=amount/1000;
      amount=amount%1000;
  }
    if(amount>=500){
      note500=amount/500;
      amount=amount%500;
  }
    if(amount>=100){
      note100=amount/100;
      amount=amount%100;
  }
    if(amount>=50){
      note50=amount/50;
      amount=amount%50;
  }
  
    if(amount>=20){
      note20=amount/20;
      amount=amount%20;
  }
    if(amount>=10){
      note10=amount/10;
      amount=amount%10;
  }
    if(amount>=5){
      note5=amount/5;
      amount=amount%5;
  }
    if(amount>=2){
      coin2=amount/2;
      amount=amount%2;
  }
  if(amount>=1){
      coin1=amount/1;
      amount=amount%1;
  }
   
   printf("1000 rs note: %d\n",note1000);
   printf("500 rs note: %d\n",note500);
   printf("100 rs note: %d\n",note100);
   printf("50 rs note: %d\n",note50);
   printf("20 rs note: %d\n",note20);
   printf("10 rs note: %d\n",note10);
   printf("5 rs note: %d\n",note5);
   printf("2 rs coin: %d\n",coin2);
   printf("1 rs coin: %d\n",coin1);

    return 0;
}