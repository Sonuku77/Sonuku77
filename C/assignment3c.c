#include<stdio.h>
int main(){
    int n,i,prime;
    while(1){
        printf("enter a number ");
        scanf("%d",&n);
        prime=1;
        for(i=2;i<n;i++){
            if(n%i==0){
                prime=0;
                break;
            }
        }
        if(prime == 1 && n>1){
            printf("prime number %d",n);
            break;
        }
        else{
            printf("not prime \n");
        }
    }
    return 0;
}