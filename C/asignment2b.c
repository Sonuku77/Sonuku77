#include<stdio.h>
int main(){
    int x;
    int sum=0;
    printf("enter a number ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        sum=sum+i;
    }
        printf("%d ",sum);
    return 0;
}