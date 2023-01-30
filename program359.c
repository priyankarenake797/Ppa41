#include<stdio.h>
#include<stdbool.h>

int CountDigitsI(int No)
{
  int iCnt = 0;

  while(No != 0)
   {
     iCnt++;

     No = No / 10;
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