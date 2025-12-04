#include<stdio.h>
int main(){
    int x,y;
    printf("enter a base ");
    scanf("%d",&x);
    printf("enter a power ");
    scanf("%d",&y);
    int power=1;
    for(int i=1;i<=y;i++){
        power=power*x;
    }
    printf("%d is power of %d = %d",x,y,power);
    return 0;
}