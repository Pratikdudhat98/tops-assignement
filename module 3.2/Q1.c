#include<stdio.h>
int main()
{
    int choice;
    int a,b;
    printf("ENTER TWO NUMBERS:\n");
    scanf("%d\n%d",&a,&b);
    printf("choose one option\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.MODULOUS\n ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("ADDITION IS =%d",a+b);
    }
    else if(choice==2)
    {
        printf("SUBTRACTION IS =%d",a-b);
    }
    else if(choice==3)
    {
        printf("MULTIPLICATION IS =%d",a*b);
    }
    else if(choice==4)
    {
        printf("DIVISION IS =%d",a/b);
    }
    else if(choice==5)
    {
        printf("MODULOUS IS =%d",a%b);
    }
    else
    {
        printf("PLEASE CHOOSE CORRECT OPTION");
    }
    
}  