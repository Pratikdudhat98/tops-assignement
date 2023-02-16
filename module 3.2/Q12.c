#include<stdio.h>
int main()
{
    int i;
    printf("ENTER YOUR NUMBER:");
    scanf("%d",&i);
    int remainder;
    int reverse=0;
    while(i>0)
    {
        remainder=i%10;
        reverse=reverse*10+remainder;
        i=i/10;
    }
    printf("REVERSE NUMBER:%d",reverse);
    
}

