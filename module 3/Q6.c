#include<stdio.h>
int main()
{
    int year,days;
    printf("ENTER NUMBER OF YEAR:");
    scanf("%d",&year);
    printf("\nNO OF DAYS:%d",year*365);
    printf("\nENTER NUMBER OF DAYS:");
    scanf("%d",&days);
    printf("\nNO OF YEARS:%d",days/365);
    return 0;
}
