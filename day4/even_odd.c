#include<stdio.h>
int main(){
    int inputnumber=0;
    printf("enetr a number");
    scanf("%d",&inputnumber);
    if(inputnumber%2==0){
        printf("the given number is even");
    }
    else{
        printf("the given number is odd");
    }
    
    return 0;
}