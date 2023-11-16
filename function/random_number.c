#include <stdio.h>   
#include <stdlib.h>	 	//----- for using rand function
#include<time.h>	//------- for using time for genrate random numbers	


int generateRandomNumber(){
    int random_no;
    srand (time (NULL));
    return  random_no = rand () % 100;
    
}

int main() {
    
  printf("%d",generateRandomNumber());

    return 0;
}