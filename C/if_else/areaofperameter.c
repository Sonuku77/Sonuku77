#include<stdio.h>
int main(){
    int l;
    int b;
    printf("enter a lenth ");
    scanf("%d",&l);
    printf("enter a breth ");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("area is grater than perimeter ");
    }
    else{
        printf("area is not grater than perimeter ");
    }
    return 0;
}