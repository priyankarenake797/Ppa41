#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  0000	0000	0000	0000	0000	0000	0000	0000
// 0          0              0           0             0              0           0       1000
//0X00000008
UINT  ToggleBit(UINT No) 
{
   UINT iMask = 0X00000008;
    UINT iAns = 0;

     iAns = No ^ iMask;
   return iAns;
}

int main()
{
  UINT Value = 0;
   UINT iRet =  0;

     printf("Enter number :\n");
     scanf("%d",&Value);

    iRet = ToggleBit(Value);

  printf("Update number is : %d \n",iRet);

  return 0;
}