#include<stdio.h>
#include<stdlib.h>
static int cf=0;
int nf , temp=0;

void up(int nf){
  
        for (cf;cf<=nf;cf++){
            sleep(1);
        printf("\nyour now in floor no %d",cf);

    }
     cf=nf;
}
void down(int nf){

        for (cf;cf>=nf;cf--){
            sleep(1);
        printf("\nyour now in floor no %d",cf);
    }
     cf=nf;
}
void menu(){
do{
        printf("\nSelect floor No :");
    scanf("%d",&nf);
    if (cf<nf){
        up(nf);
           

    }
    else{
        down(nf);
            

    }
}
while(nf!=-1);
    
}

void main (){

    menu();
    cf=nf;
}