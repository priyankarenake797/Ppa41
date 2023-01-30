#include<stdio.h>

void CharToggleX(char ch)
{
    int iCnt = 0;

   for(iCnt = ch ;iCnt <= ch ;iCnt++)
   {  
   if((ch >='A') && (ch <= 'Z' )) 
   {
     ch =  ch + 32;    
     printf("%c",ch++);
   }
 else if( (ch >='a') && (ch <= 'z'))
   {
      ch = ch - 32;

       printf("%c",ch++);
    }
  else
    {
        ch;
      printf("%c",ch++);
    }
   
  }
  
}


int main()
{ 
   char cValue = '\0';

  printf("Enter the character \n");
  scanf("%c",&cValue);
 
  CharToggleX(cValue);
 
  
  return 0;
}