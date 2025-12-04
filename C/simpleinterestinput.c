#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("enter a principal :");
    scanf("%f",&p);
    printf("enter a rate :");
    scanf("%f",&r);
    printf("enter a time :");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("simple interest is : %f",si);
    return 0;
}