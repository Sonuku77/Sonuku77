#include<stdio.h>
int main(){
    int x;
    printf("enter a unit ");
    scanf("%d",&x);
    if(x<=100){
    printf(" electricity bill = %f",x*1.5);
    }
    if(x>=101 && x<=250){
        printf("electricity bill = %f",x*1.75);
    }
    if(x>=251 && x<=500){
        printf("electricity bill = %f",x*2.25);
    }
    if(x>500){
        printf("electricity bill = %f",x*2.50);
    }
   
    return 0;
}