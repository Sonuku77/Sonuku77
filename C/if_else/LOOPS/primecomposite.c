#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int a=0;
    for(int i=2;i<=x-1;i++){
        if(x%i==0){
            a=1;
            break;
        }
    }
    if(x==1)printf("1 is neither prime nr composite");
    else if(a==0) printf("the given number is prime\n");
    else printf("the given number is composite\n");
    return 0;
}