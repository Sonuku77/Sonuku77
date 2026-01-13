#include<stdio.h>
int main(){
    int x;
    printf("enter a line ");
    scanf("%d",&x);
    int a=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
         printf("%d ",a);
         a+=2;
        }
        printf("\n");
    }
    return 0;
}