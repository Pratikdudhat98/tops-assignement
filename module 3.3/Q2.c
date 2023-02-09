#include<stdio.h>
int main()
{
    int a,b;
    char choice;
    printf("enter number:");
    scanf("%d",&a);
    printf("\nenetr number:");
    scanf("%d",&b);
    printf("\n+,-,*,/:");
    scanf(" %c",&choice);
    switch (choice)
    {
    case '+':
        printf("ANSWER IS =%d",a+b);
        break;
    case '-':
        printf("ANSWER IS =%d",a-b);
        break;
    case '*':
        printf("ANSWER IS =%d",a*b);
        break;
    case '/':
        printf("ANSWER IS =%d",a/b);
        break;
    default:
        printf("PLEASE CHOOSE CORRECT OPTION");
        break;
    }
}