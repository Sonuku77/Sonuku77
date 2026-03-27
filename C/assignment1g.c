#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter a triangle x ");
    scanf("%d",&x);
     printf("enter a triangle y ");
    scanf("%d",&y);
     printf("enter a triangle z ");
    scanf("%d",&z);
     if(x+y+z !=180 || x<=0 || y<=0 || z<=0 ){
        printf("invalid triangle");
    }
   else if(x==y && y==z){
        printf("equilateral triangle");
    }
   else if(x==y || y==z || z==x){
        printf("isosceles triangle");
    }
    else{
        printf("scalene triangle");
    }
    return 0;
}