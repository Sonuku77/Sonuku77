#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1;i<=x-2;i++){
    sum=a+b;
    a=b;
    b=sum;
    }
    printf("fibonacci is %d\n",sum);
    return 0;
}