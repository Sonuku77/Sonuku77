#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    if(x%5==0  ||  x%3==0){
        if(x%15!=0){
            printf("this is divisible by 5 or 3");
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