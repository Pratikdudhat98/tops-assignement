#include<stdio.h>
int main()
{
    printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISON\n5.MODULOUS\n");
    int option;
    printf("please select your option\n");
    scanf("%d",&option);
    switch(option)
    {
     case 1:
    {
     int num1;
     int num2;
     printf("ENTER TWO NUMBER\n");
     scanf("%d %d",&num1,&num2);
     printf("ANS = %d",num1+num2);
    
     break;
    } 
    case 2:
    {
     int num1;
     int num2;
     printf("ENTER TWO NUMBER\n");
     scanf("%d %d",&num1,&num2);
     printf("ANS = %d",num1-num2);
    
     break;
    } 
     case 3:
    {
     int num1;
     int num2;
     printf("ENTER TWO NUMBER\n");
     scanf("%d %d",&num1,&num2);
     printf("ANS = %d",num1*num2);
         
     break;
    }
     case 4:
    {
     int num1;
     int num2;
     printf("ENTER TWO NUMBER\n");
     scanf("%d %d",&num1,&num2);
     printf("ANS = %d",num1/num2);
     
    break;
    } 
     case 5:
    {
     int num1;
     int num2;
     printf("ENTER TWO NUMBER\n");
     scanf("%d %d",&num1,&num2);
     printf("ANS = %d",num1%num2);
    
     break;
    } 
     default:
     {
        printf("please choose correct option");
        break;
     }
    }
}