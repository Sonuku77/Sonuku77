#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    printf("%d ",fact);
    } 
    return 0;
}