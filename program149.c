#include<stdio.h>

int ToLower(char ch )
{
   if((ch >='A') && (ch <= 'Z'))
   {
     return ch + 32;   //32 he difference beetweem A to a 97 - 65 = 32 
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
 
  cRet = ToLower(cValue);
 
  printf("Character in the lower case is :%c\n",cRet); 

  return 0;
}