#include<stdio.h>

int  Revers(int iNo)
{
   int iDigit = 0, iRev = 0;
   
    if(iNo == 0)
    {
       iNo = -iNo;
    }
   while(iNo != 0)
    {
       iDigit = iNo % 10;
       iRev = (iRev * 10)+ iDigit;
       iNo = iNo / 10;
     }
      return iRev;
}

int main()
{
   int iValue =0 , iRet = 0;
   
   printf("Enter no : \n");
   scanf("%d",&iValue);
  
   iRet = Revers(iValue);
   
   printf("Revers no are : %d",iRet);

   return 0;
}

