#include<stdio.h>
int main()
{
int length;
int width;
printf("WIDTH:");
scanf("%d",&width);
printf("\nLENGTH:");
scanf("%d",&length);
printf("\nRECTANGLE AREA IS =%d\n",width*length);
int base;
int height;
printf("\nHEIGHT:");
scanf("%d",&height);
printf("\nBASE:");
scanf("%d",&base);
printf("\nTRIANGLE AREA IS =%d\n",(base*height)/2);
float radius;
printf("\nradius:");
scanf("%f",&radius);
printf("\nCIRCLE AREA IS =%.2f",3.14*(radius*radius));
}