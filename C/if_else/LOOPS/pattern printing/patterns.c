#include<stdio.h>
int main(){
    int x;
    printf("enter a rows ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int i=1;i<=x;i++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}