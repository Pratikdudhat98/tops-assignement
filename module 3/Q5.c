#include<stdio.h>
int main()
{
int year;
printf("ENTER YEAR :");
scanf("%d",&year);
if(year%4==0)
{
    printf("\nTHIS YEAR IS LEAP YEAR");
}
else
{
     printf("\nTHIS YEAR IS NOT LEAP YEAR");
}
return 0;
}    