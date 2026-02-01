#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        int a=i-1;
        for(int j=1;j<=x-i;j++){
            printf(" ");
       }
       for(int p=1;p<=i;p++){
        printf("%c",p+64);
       }
       for(int k=1;k<=i-1;k++){
        printf("%c",a+64);
        a--;

       }
       
       printf("\n");
    }
    return 0;
}