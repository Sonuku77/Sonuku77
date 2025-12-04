#include<stdio.h>
int main(){
    int x;
    printf("enter x number ");
    scanf("%d",&x);
    int y;
    printf("enter y number ");
    scanf("%d",&y);
    int z;
    printf("enter z number ");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("x is gratest number");
    }
    if(y>x && y>z){
        printf("y is gratest");
    }
    if(z>x && z>y){
        printf("z is gratest");
    }
    return 0;
}