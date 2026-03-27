#include<stdio.h>
int main(){
    int x,i,count=0;
    printf("enter a number ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==2){
        printf("prime number ");
    }
    else{
        printf("not prime number ");
    }
    return 0;
    
}