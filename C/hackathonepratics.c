#include<stdio.h>
int main(){
    int x,original,reverse=0,reminder;
    printf("enter a number ");
    scanf("%d",&x);
    original=x;
    while(x!=0){
        reminder=x%10;
        reverse=reverse*10+reminder;
        x=x/10;
    }
    if(original==reverse){
    printf("this is palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}