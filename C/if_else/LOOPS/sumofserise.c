#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int sum=0;
    if(x%2==0){
        sum=-x/2;
    }
    else{
        sum=-x/2+x;
    }
    printf("the sum is %d",sum);
    return 0;
}