#include<stdio.h>
int main(){
    int inputnumber=0;
    printf("enter a number: ");
    scanf("%d",& inputnumber);
    if(inputnumber<0){
       printf("the number is greter than or equals to 0 and less than 10");
    }
    else if(inputnumber>=0 && inputnumber<10){
        printf("the number is greater than or equal to 10 and less than 20");
    }
    else{
        printf("the number is greater than or equal to 20");
    }


    return 0;
}   
