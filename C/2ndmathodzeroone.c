#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0)
            printf("%d ",1);
            else printf("%d ",0);
        }
        printf("\n");
    }
    return 0;
}