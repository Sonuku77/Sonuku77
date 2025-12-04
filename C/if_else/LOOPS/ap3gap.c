#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    for(int i=4;i<=3*x+1;i=i+3){
        printf("%d ",i);
    }
    return 0;
}