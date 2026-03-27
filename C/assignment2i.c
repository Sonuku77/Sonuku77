#include<stdio.h>
int main(){
    int choice;
    do{
        printf("\n menu \n");
        printf("hello\n");
        printf("welcome\n");
        printf("exit\n");
        printf("enter a choice ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("hello\n");
            break;
            case2:
            printf("welcome\n");
            break;
            case3:
            printf("exiting program\n");
            break;
            default:
            printf("invalid choice");

        }
    }
    while(choice !=3);
        return 0;
    }
