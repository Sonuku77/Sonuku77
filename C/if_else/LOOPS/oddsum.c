#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int sum=0;
    int LD=0;
    while(x!=0){
        LD=x%10;
        if(LD%2!=0){
            sum=sum+LD;
        }
        x=x/10;
    }
    printf("this is odd sum %d ",sum);
    return 0;
}