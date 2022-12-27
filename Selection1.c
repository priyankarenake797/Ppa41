       //Even Odd program


#include<stdio.h>
#include<stdbool.h>   // stdbool madhe bool vaparatat



bool CheckEven(int iNo)   // % mod
{
   if((iNo % 2)== 0)    // equqality operator ==   
     {
         return true;      // true
     }
   else
    {
     
       return false;     // false
    }


}


int main()
{
     int iValue = 0;
       bool bRet;                // suppose initialized karayach asel tar bool bRet=false
   printf("Enter one number\n");
   scanf("%d",&iValue);
     
   bRet = CheckEven(iValue);

    if(bRet == true)
   {
      printf("It is even number\n");
    }
     else
     {
       printf("It is odd number\n");
      }



    return 0;

}