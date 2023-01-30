#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkAlph(char ch)
{
  if(((ch >= 'A') || (ch <= 'Z')) && ((ch >= 'a') || (ch <= 'b')) )
    {
        return 1;
     }   
   else 
   {
        return 0;
   }
}

int main()
{
   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("Enter the character ");
   scanf("%c", &cValue);

   bRet = ChkAlph(cValue);
   
     if(bRet == TRUE)
      {
         printf(" TRUE");
      }
     else        
      {
         printf("FALSE");
      }
   return 0;
}