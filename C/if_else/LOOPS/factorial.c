#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int product=1;
    for(int i=1;i<=x;i++){
        product=product*i;
    }
    printf("the fact is %d",product);
    return 0;
}