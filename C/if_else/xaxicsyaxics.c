#include<stdio.h>
int main(){
    int x,y;
    printf("ente a number ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("origin");
    }
    else if (x==0){
        printf("y-axis");
    }
    else{
        printf("x-axis");
    }
    return 0;
}