#include<stdio.h>

void DisplayASCII(char ch)
{
  int i = ch;

  
     printf(" Decimal \t Hex \t Octal");

     if( i <= 127 )
      {
        printf(" \t %d \t %x \t %o \n ",i,i,i);
     }

  
}

int main()
{
   char cValue = '\0';

   printf("Enter the character ");
   scanf("%c",&cValue);

  DisplayASCII(cValue);

  return 0;
}





