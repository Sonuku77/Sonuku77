#include<stdio.h>
int main(){
    int x,nst=1;
    printf("enter a number ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}