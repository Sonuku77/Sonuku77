#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    float y=100;
    for(int i=1;i<=x;i++){
        printf("%f ",y);
        y=y*1/2;
    }
}