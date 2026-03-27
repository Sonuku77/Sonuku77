#include<stdio.h>
int main(){
    char str[100];
    int i=0,count=0;
    printf("enter a string: ");
    scanf("%s",&str);

    while(str[i] !='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u'){
            count++;
        }
        i++;
    }
    printf("vowels = %d", count);
    return 0;
}