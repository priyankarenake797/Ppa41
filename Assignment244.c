#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL  ChkSpecial(char ch)
{
   if((ch >= '!')  &&  (ch <= '*'))
     {
      return TRUE;
     }
    else
    {
      return FALSE;
    }

}

int main()
{
   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("Enter the character ");
   scanf("%c", &cValue);

   bRet = ChkSpecial(cValue);
   
     if(bRet == TRUE)
      {
         printf("TRUE");
      }
     else
      {
         printf("False");
      }
   return 0;
}