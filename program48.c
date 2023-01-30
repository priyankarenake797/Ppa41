#include<stdio.h>

int CountDigits(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;
  
    while(iNo > 0)   // fakt ithe badalal
     {
      iDigit = iNo %10; //he line nahi lihal tari chalel output yetach
        iNo =iNo/10;
            iCnt++;
     }
    return iCnt;
}

int main()
{
   int iValue = 0;
   int iRet = 0;
    printf("Plaese enter a number : \n");
    scanf("%d",&iValue);
   
    iRet = CountDigits(iValue);
   
    printf("Number of Digits are : %d\n",iRet);
  return 0;
}