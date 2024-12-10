#include<stdio.h>
int main(){
    printf("inside\n");
    for(int i=0;i<=24;i++){
        printf("%d \n",i);
    }

    printf("outside: \n");
    int j=0;
    for(j=0;j<=13;j++){
        printf("%d \n",j);
    }
}