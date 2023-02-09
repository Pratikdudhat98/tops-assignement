#include<stdio.h>
int main()
{
    int P;
    int R;
    int N;
    printf("PRINCIPLE:");
    scanf("%d",&P);
    printf("\nRATE OF INTEREST:");
    scanf("%d",&R);
    printf("\nNUMBER OF YEARS:");
    scanf("%d",&N);
    printf("\nSIMPLE INTEREST IS : %d",(P*R*N)/100);
    return 0;
}