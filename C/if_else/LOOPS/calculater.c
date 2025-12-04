#include<stdio.h>
 int main(){
    float num1;
    float num2;
    char op;
    float result;

    printf("enter a first number ");
    scanf("%f",&num1);

    printf("enter a opration ");
    scanf(" %c",&op);

    printf("enter a second number ");
    scanf("%f",&num2);

    switch(op){
        case '-':
        result = num1-num2;
        printf("%f",result);
        break;

        case '+':
        result = num1+num2;
        printf("%f",result);
        break;

        case '*':
        result = num1*num2;
        printf("%f",result);
        break;

        case '/':
        result = num1/num2;
        printf("%f",result);
        break;

        default :
        printf("the opration is not vailed:");
    }
}
