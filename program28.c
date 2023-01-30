//summation of 1 to 5 number addition

#include<stdio.h>

int Summation()
{   
  int iSum = 0;
  int iCnt = 0;
        //1        2          3
    for(iCnt = 1;iCnt <= 5 ; iCnt++)
      {
       
       iSum = iSum + iCnt;  //4

      }
    return iSum;
}

int main()
{   
  
      
   int iRet = 0;
   
   iRet = Summation();
   
   printf("summation is :%d\n",iRet);
  
   return 0;
}
