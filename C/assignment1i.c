#include<stdio.h>
int main(){
    int x,original,reverse=0,remainder;
    printf("enter a number ");
    scanf("%d",&x);
    original=x;
    while(x!=0){
        remainder=x%10;
        reverse=reverse*10+remainder;
        x=x/10;
    }
    if(original == reverse){
    printf("palindrome number\n");
    }
    else{
        printf("not palindrome number\n");
    }
    return 0;
}