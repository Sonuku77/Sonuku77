#include<stdio.h>
int main(){
    int ram;
    printf("enter a ram ages ");
    scanf("%d",&ram);
    int shyam;
    printf("enter a shyam ages ");
    scanf("%d",&shyam);
    int ajay;
    printf("enter a ajay ages ");
    scanf("%d",&ajay);
    if(ram<shyam && ram<ajay){
        printf("ram is youngest");
    }
    if(shyam<ram && shyam<ajay){
        printf("shyam is youngest");
    }
    if(ajay<ram && ajay<shyam){
        printf("ajay is youngest");
    }
    return 0;
}