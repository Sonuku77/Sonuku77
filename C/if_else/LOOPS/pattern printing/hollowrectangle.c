#include<stdio.h>
int main(){
    int x,y;
    printf("enter a number of row and column ");
    scanf("%d%d",&x,&y);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(i==1||i==x||j==1||j==y)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}