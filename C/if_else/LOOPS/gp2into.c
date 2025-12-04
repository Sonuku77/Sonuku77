#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int y=1;
    for(int i=1;i<=x;i++){
    printf("%d ",y); 
    y=y*2; 
    }
    return 0;
}