#include<stdio.h>
int main()
{
    int P[10];
    int big_number=0;
    printf("enter numbers :\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&P[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(big_number<P[i])
        {
            big_number=P[i];
        }
    }
     printf("MAX number is :%d",big_number); 
}
