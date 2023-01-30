#include<stdio.h>

int CharToggleX(char ch )
{
   if((ch >='A') && (ch <= 'Z'))
   {
     return ch + 32;   //32 he difference beetweem A to a 97 - 65 = 32 
   }
  else if((ch >='a') && (ch <= 'z'))
   {
   return ch - 32;
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
 
  cRet = CharToggleX(cValue);
 
  printf("Toggle Character is :%c\n",cRet); 

  return 0;
}