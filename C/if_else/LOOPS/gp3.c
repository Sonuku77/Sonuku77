#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int y=3;
    for(int i=1;i<=x;i++){
        printf("%d ",y);
        y=y*4;
    }
    return 0;
}