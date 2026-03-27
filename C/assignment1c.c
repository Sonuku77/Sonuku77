#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    if(x>=90){
        printf("this student grade is A");
    }
    if(x>=75 && x<=89){
        printf("his student grade is B");
    }
    if(x>=60 && x<=74){
        printf("his student grade is c");
    }
    if(x>=40 && x<=59){
        printf("his student grade is D");
    }
    if(x<40){
        printf("his student grade is F");
    }
    return 0;

}