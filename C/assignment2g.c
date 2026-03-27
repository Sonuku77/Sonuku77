#include<stdio.h>
int main(){
    int x,r,rev=0,temp;
    printf("entr a number ");
    scanf("%d",&x);
    temp=x;
    while(x>0){
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    if(temp==rev){
        printf("palindrome number ");
    }
    else{
      printf("not palindrome number ");
    } 
    return 0;
}