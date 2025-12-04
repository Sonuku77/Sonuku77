#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int LD=0;
    int R=0;
    while(x!=0){
        R=R*10;
        R=R+(x%10);
        LD=(x%10);
        R=R+LD;
        x=x/10;
    }
    printf("%d ",R);
    return 0;
}