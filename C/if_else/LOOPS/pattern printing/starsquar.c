#include<stdio.h>
int main(){
    int x;
    printf("enter a row ");
    scanf("%d",&x);
    int y;
    printf("enter a coulum ");
    scanf("%d",&y);
    for(int i=1;i<=x;i++){
        for(int i=1;i<=y;i++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}