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
        printf("%d",p);
       }
       for(int k=1;k<=i-1;k++){
        printf("%d",a);
        a--;

       }
       
       printf("\n");
    }
    return 0;
}