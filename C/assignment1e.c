#include<stdio.h>
int main(){
    char x;
    printf("enter a ");
    scanf("%c",&x);
    if(isalpha(x)){
    printf("%c is alphabet ",x);
    }
    else if(isdigit(x)){
    printf("%c is digit ",x);
    }
    else {
        printf("%c is spacial character",x);
    }
    return 0;
}