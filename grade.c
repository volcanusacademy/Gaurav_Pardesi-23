#include <stdio.h>
// program for calculating average and give grade according to total percentage

int grade(int marks){ // create function grade
    if (marks>=75 && marks<=100 ){
        printf("Your Grade is 'A'");
    }
    
    else if (marks>=60 && marks<75 ){
        printf("Your Grade is 'B'");
    }
    else if (marks>=50 && marks<60){
        printf("Your Grade is 'C'");
    }
    else if (marks>=33&& marks<50){
        printf("Your Grade is 'D'");
    }
    
    else{
        printf("Your faill");
    }
}

int main()
{   int num ,per ,temp;
    printf("Enter total subjects: ");
    scanf("%d",&num);
    int sub[num];
    for (int i=0 ;i<num;i++){
        printf("Enter the marks of subject:%d \n",i+1);
        scanf("%d",&sub[i]);
        temp+=sub[i];
    }
    per = temp/num;
    printf("your total percentage is %d \n",per);
    grade(per);
    return 0;
}