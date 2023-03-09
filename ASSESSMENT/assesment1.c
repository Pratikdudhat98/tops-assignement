#include<stdio.h>
#include<string.h>
void choice(int select);
int main ()
{
  repeat:
  printf("1.REVERSE A STRING\n2.CONCATENATION\n3.PALINDROME\n4.COPY A STRING\n5.LENGTH OF THE STRING\n6.FREQUENCY OF CHARACTER IN STRING\n7.FIND NUMBER OF VOWELS AND CONSONANTS\n8.FIND NUMBER OF BLANK SPACES AND DIGIT\n");
  printf("CHOOSE YOUR OPTION ?\n");
  int option;
  scanf("%d",&option);
  choice(option);
  int a;
  printf("\n DO YOU WANT TO CONTINUE ?\n1.YES\n2.NO");
  scanf("\n%d",&a);
  if(a==1)
  {
    goto repeat;
  }
  else
  {
    printf("thank you");
  }
     

}

void choice(int select)
{
    if(select==1)
    {
         char name[100];
         printf("ENTER FULLNAME:");
         scanf(" ");
         gets(name);
         printf("\nREVERSE FULL NAME:%s",strrev(name));
    }
    else if(select==2)
    {   
        char name[50];
        char surname[20];
        printf("ENTER NAME:");
        scanf(" ");
        gets(name);
        printf("ENTER SURNAME:");
        gets(surname);
        strcat(name,surname);
        printf("FULL NAME IS %s",name);
    }
    else if(select==3)
    {
        char name[50];
        char p[20];
        printf("ENTER NAME:");
        scanf(" ");
        gets(name);
        strcpy(p,name);
        if(strcmp(name,p)==0)
        {
            printf("this string is palindrome");
        }
        else
        {
            printf("this string is not palindrome");
        }
    }    
    else if(select==4)
    {
        char name[50];
        char p[20];
        printf("ENTER NAME:");
        scanf(" ");
        gets(name);
        strcpy(p,name);
        printf("%s",p);
    }   
    else if(select==5)
    {
         char name[100];
         printf("ENTER FULLNAME:");
         scanf(" ");
         gets(name);
         printf("\nLENGTH FULL NAME:%d",strlen(name));
    }    
    else if(select==6)
    {
        char name[100];
        printf("ENTER FULLNAME:");
        scanf(" ");
        gets(name);
        char fre;
        int count=0;
        printf("ENETR CHARACTER:");
        scanf("%C",&fre);
        for(int i=0;name[i]!='\0';i++)
        {
           if(fre==name[i])
           { 
           count++;
           } 
        }   
        printf("frequency of character %c=%d",fre,count);       
    }
    else if(select==7)
    {
         char name[100];
         printf("ENTER FULLNAME:");
         scanf(" ");
         gets(name);
         int vowels=0;
         int consonants=0;
        for(int i=0;name[i]!='\0';i++)
        {
            if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U') 
            {
                vowels++;
            } 
            else if(name[i]==' ')
            {
                continue;
            }
            else
            {
                consonants++;
            }
        }
        printf("number of vowels %d\n",vowels);
        printf("number of consonants %d",consonants);
    }
    else if(select==8)
    {   
         char name[100];
         printf("ENTER FULLNAME:");
         scanf(" ");
         gets(name);
         int blank_space =0;
         int digit=0;
         for(int i=0;name[i]!='\0';i++)
         {
            if(name[i]==' ')
            {
                blank_space++;
            }
            if(name[i]>='0')
            {
                digit++;
            }
         }   
            printf("no of blank_space %d\n",blank_space);
            printf("no of digit %d",digit); 
         
    }
    else
    {
       printf("please choose correct option ");
    }

}   
 


    