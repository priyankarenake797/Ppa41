#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;


#define TRUE 1
#define FALSE 0

BOOL  ChkDigit(char ch)
{
   if((ch >= 48)  &&  (ch <= 57))
     {
      return true;
     }
    else
    {
      return false;
    }

}

int main()
{
   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("Enter the character ");
   scanf("%c", &cValue);

   bRet = ChkDigit(cValue);
   
     if(bRet == TRUE)
      {
         printf("It is digit");
      }
     else
      {
         printf("It is not digit");
      }
   return 0;
}