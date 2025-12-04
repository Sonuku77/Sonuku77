#include<stdio.h>
int main(){
    int x;
    printf("enter a first number ");
    scanf("%d",&x);
    int y;
    printf("enter a second number ");
    scanf("%d",&y);
    int z;
    printf("ener a third number ");
    scanf("%d",&z);
    if(x+y>z && y+z>x && z+x>y){
        printf("vilad trangle");
    }
    else{
        printf("invilad trangle");
    }
    return 0;
}