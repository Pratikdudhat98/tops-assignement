#include<stdio.h>
int main()
{
    int a,b,c;
    printf(" ENTER TWO NUMBERS:\n");
    scanf("%d\n%d",&a,&b);
    printf("\nBEFORE SWAPPING\n a=%d\nb=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAFTER SWAPPING\n a=%d\nb=%d",a,b);
}
