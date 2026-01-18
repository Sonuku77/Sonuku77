#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            printf("  ");  // double space
        }        
         for(int k=1;k<=i;k++){
                printf("%C ",k+64);
        }
        printf("\n");
    }
    return 0;
}