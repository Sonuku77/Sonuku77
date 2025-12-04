#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int y=100;
    for(int i=1;i<=x;i++){
    printf("%d ",y);
    y=y-3;
    }
    return 0;
}