#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int nsp=x-1;
    for(int i=1;i<=x;i++){
         int a=i-1;
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int q=1;q<=i-1;q++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}