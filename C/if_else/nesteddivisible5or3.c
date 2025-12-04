#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    if(x%5==0){
        if(x%3==0){
            printf("this is divisible by 3 or 5");
        }
        else{
            printf("this is not divisible by 5 or 3");
        }
    }
    else{
        printf("this is not divisible by 5 or 3");
    }
    return 0;
}