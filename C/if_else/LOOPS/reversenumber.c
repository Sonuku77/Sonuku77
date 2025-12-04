#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int R=0;
    while(x!=0){
        R=R*10;
        R=R+(x%10);
        x=x/10;
    }
    printf("the reversed number is %d ",R);
    return 0;
}