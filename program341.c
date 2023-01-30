//*****************************Dynamic Masking Code ********************************//

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos)
{
   UINT iMask = 0X00000001;   // alwayse set 1 dont initialization 0    .....   UINT iMask = 1

   UINT Result = 0;


   if(Pos < 1 || Pos > 32)
     {
        printf("Invalid position,it shoude betweeen 1 to 32 \n");
    
        return false;
     }

    iMask = iMask << (Pos - 1);  // dynamic mask formation

   
   Result = No & iMask;

   if(Result == iMask)
    {e
      return true;
    }
  else
    {
      return false;
   }
}

int  main()
{
  UINT Value = 0;
  UINT Position = 0;
   bool bRet = false;

  printf("Enter number : \n ");
  scanf("%d",&Value);

  printf("Enter the position of bit");
  scanf("%d",&Position);
   bRet = CheckBit(Value,Position);
 
   if(bRet == true)
      {
         printf(" bit at position %d  is ON \n",bRet);
      }
     else
    {
      printf("bit at position %d  is OFF \n",bRet);
    }

    return 0;
}