#include<stdio.h>

int ToUpper(char ch )
{
   return ch - 32;

}


int main()
{ char cValue = '\0' , cRet = '\0';

  printf("Enter the character \n");
  scanf("%c",&cValue);
 
  cRet = ToUpper(cValue);
 
  printf("Character in the upper case is :%c\n",cRet); 

  return 0;
}