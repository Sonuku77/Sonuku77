#include<stdio.h>
int main(){
    int x=3,y=5,a,b;
    float c,d;
    a=x/y*x;
    b=y/x*x;
    c=x/y*x;
    d=y/x*x;
    printf("%d %d %f %f",a,b,c,d);
    return 0;
}