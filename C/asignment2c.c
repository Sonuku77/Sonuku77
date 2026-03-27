#include<stdio.h>
int main(){
    int x;
    int mul=1;
    printf("enter a number ");
    scanf("%d",&x);
    for(int i=x;i>=1;i--){
        mul=mul*i;
    }
    printf("factorial= %d ",mul);
    return 0;

}