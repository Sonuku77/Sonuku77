#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number a :");
    scanf("%d",&a);
    printf("enter a number b :");
    scanf("%d",&b);
    int q =a/b;
    int r=a-(b*q);
    printf("%d",r);
    return 0;
}