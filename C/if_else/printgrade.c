#include<stdio.h>
int main(){
    int x;
    printf("enter a parsenteg ");
    scanf("%d",&x);
    if(x>=90 && x<=100){
        printf("excllent");
    }
    if(x>=80 && x<90){
        printf("very good");
    }
    if(x>=70 && x<=80){
        printf("good");
    }
    if(x>=60 && x<=70){
        printf("can do batter");
    }
    if(x>=50 && x<=60){
        printf("average");
    }
    if(x>=40 && x<=70){
        printf("below everege");
    }
    if(x<40){
        printf("fail");
    }
    return 0;
}