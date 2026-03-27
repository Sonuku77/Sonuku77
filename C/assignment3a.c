#include<stdio.h>
int main(){
    int x=1,j;
    while(x<=5){
        j=1;
        while(j<=x){
            printf("* ");
            j++;
        }
        printf("\n");
        x++;
    }
    return 0;
}