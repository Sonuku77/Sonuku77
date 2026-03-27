#include<stdio.h>
int main(){
    int x,y,z;
   printf("enter a number ");
    scanf("%d",&x);
    printf("enter a number ");
    scanf("%d",&y);
    printf("enter a number ");
    scanf("%d",&z);
    if(x>y && x>z){
        printf(" %d x is large",x);
    }
    if(y>x && y>z){
        printf(" %d y is large",y);
    }
    if(z>x && z>y){
        printf(" %d z is large",z);
    }
    return 0;
}
