#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    if(x%4==0){
        printf("leap year\n");
    }
    else{
        printf("not leap year\n");
    }
    if(x%100==0){
        printf("century year");
    }
    return 0;
}