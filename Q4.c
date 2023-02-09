#include<stdio.h>
int main()
{
    int choice;
    printf("1.MONDAY\n2.TUESDAY\n3.WEDNESDAY\n4.THURSDAY\n5.FRIDAY\n6.SATURDAY\n7.SUNDAY\n");

    printf("ENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch (choice)
  {  case 1:
    {
     printf("\nMONDAY");
    }
     break;
    case 2:
    {
     printf("\nTUESDAY");
    }
     break;
     case 3:
    {
     printf("\nWEDNESDAY");
    }
     break;
     case 4:
    {
     printf("\nTHURSDAY");
    }
     break;
     case 5:
    {
     printf("\nFRIDAY");
    }
     break;
     case 6:
    {
     printf("\nSATURDAY");
    }
     break;
     case 7:
    {
     printf("\nSUNDAY");
    }
     break;
    default:
    {
     printf("\nPLEASE ENTER CORRECT CHOICE");
    }
  }
}