
/* this perfect program from 46 to 50  */

// ya madhe -3 -2 -1 0 1 2 3   -ve , +ve ani 0 pan digit display karat

#include<stdio.h>

int CountDigits(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;
    
    if(iNo == 0)   // Filter  yala industrial programimg mhantat.......
     {
       return 1;
     }     

    if(iNo < 0)   // Updator  yala industrial programimg mhantat.......
     {
       iNo = -iNo;
     }  


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