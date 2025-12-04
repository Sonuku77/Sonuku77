#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    for(int i=4;i<=x;i=i+3){
        printf("%d ",i);
    }
}