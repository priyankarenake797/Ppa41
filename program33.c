 

#include<stdio.h>

//0(N/2)

int SumFactors(int iNo)
{
  int iCnt = 0;
  int iSum =0;
  
  for(iCnt = 1 ; iCnt <=(iNo/2); iCnt++)  // time complexity means redused the time
   {
     if((iNo % iCnt) == 0)
      {
         iSum = iSum + iCnt;
      }

    }
  return iSum;
}

int main()
{
   int iValue = 0;
    int iRet = 0;
   printf("Enter number : \n");
   scanf("%d",&iValue);
   
   iRet = SumFactors(iValue);
   printf("summation of factors : %d\n",iRet);

   return 0;
}