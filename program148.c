#include<stdio.h>

int ToUpper(char ch )
{
   if((ch >='a') && (ch <= 'z'))
   {
     return ch - 32;   //32 he difference beetweem A to a 
   }
  else
   {
   return ch;
    }
}


int main()
{ char cValue = '\0' , cRet = '\0';

  printf("Enter the character \n");
  scanf("%c",&cValue);
 
  cRet = ToUpper(cValue);
 
  printf("Character in the upper case is :%c\n",cRet); 

  return 0;
}