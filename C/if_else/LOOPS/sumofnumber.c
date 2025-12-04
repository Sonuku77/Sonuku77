#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int sum=0;
    int ld=0;
    while(x!=0){
        ld=x%10;
        sum=sum+ld;
        x=x/10;
    }
    printf("the sum of digits are %d ",sum);
    return 0;
    
}