#include<stdio.h>
#include<stdbool.h>


// 7 8 9 th bit

typedef unsigned int UINT;

//0000	0000	0000	0000	0000	0000	0000	0000 
//0000	0000	0000	0000	0000	0001	1100	0000 
//0            0           0              0           0         1             C             0
//000001C0
//0X000001C0

bool CheckBit(UINT No)
{
   UINT iMask = 0X000001C0;


   UINT Result = 0;

   Result = No & iMask;

   if(Result == iMask)
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
  UINT Value = 0;
   bool bRet =  false;

     printf("Enter number :\n");
     scanf("%d",&Value);

    bRet = CheckBit(Value);

     if(bRet == true)
      {
         printf("7th , 8th , 9th bit is ON \n");
      }
     else
    {
      printf("7th , 8th , 9th bit is OFF \n");
    } 
  return 0;
}