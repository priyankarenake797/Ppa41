#include<stdio.h>
#include<stdbool.h>

bool CheckPlindrome(int iNo)
{
   int iDigit = 0, iRev = 0;
   
   int iTemp = iNo;
   for(;iNo != 0;)   //for(;;) valid ahe for m adhe
    {
       iDigit = iNo % 10;
       iRev = (iRev * 10)+ iDigit;
       iNo = iNo / 10;
     }
      if(iRev == iTemp)
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
   int iValue =0 ;
   bool bRet;
   
   printf("Enter no : \n");
   scanf("%d",&iValue);
  
   bRet = CheckPlindrome(iValue);
   
    if(bRet == true)
    {
     printf("%d is palindrom number \n",iValue);
    }
    else
     {
     printf("%d is not palindrom number \n",iValue);
     }

   return 0;
}

