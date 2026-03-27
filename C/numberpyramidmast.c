#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int sp=0;
    int st=x;
    for(int k=1;k<=x;k++){
    for(int i=1;i<=sp;i++){
        printf(" ");
    }
    for(int j=1;j<=st;j++){
        printf("*");
    }
    sp++;
    st--;
    printf("\n");
}
    return 0;
}