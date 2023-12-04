#include <stdio.h>

int main() {
    int marks[3] , total , percent , count=0;
    for (int i=0;i<3;i++){
        printf("Enter the marks of %d subject: ",i+1);
        scanf("%d",&marks[i]);
        total+=marks[i];
        percent=total/3;
    }

    for(int i=0;i<3;i++){
        if(marks[i]<75){
            count++;
        }
    }
if (count>0){
    printf("Your fail because you dont have 75 marks in all subjects");
}
else if (percent<80){
      printf("Your fail because you dont have 80 percent ");
}
else{
    printf("congratulation Your pass your percantge is: %d ",percent);
}

    return 0;
}