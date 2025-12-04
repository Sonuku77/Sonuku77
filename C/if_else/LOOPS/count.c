#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int count=0;
    while(x!=0){
        x=x/10;
        count++;
    }
    printf("number of digits is %d ",count);
    return 0;
}