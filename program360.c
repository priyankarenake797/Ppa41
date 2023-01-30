#include<stdio.h>
#include<stdbool.h>

int CountDigitsI(int No)
{
  static int iCnt = 0;

  if(No != 0)
   {
     iCnt++;

     No = No / 10;
     CountDigitsI( No);
    }
  return iCnt;
}

int main()
{
   int Value = 0  , iRet = 0;
  
   printf("Enter a number : \n");
   scanf("%d",&Value);

    iRet = CountDigitsI(Value);
 printf("Number of Digits is :%d",iRet);
  return 0;
}