#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            int a=x/2+1;
            if(i==a||j==a)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}