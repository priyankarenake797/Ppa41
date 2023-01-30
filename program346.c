#include<stdio.h>

typedef ToggleRange(UINT No, UINT Start ,UINT End)
{
   UINT Mask = 0, Mask1 = 0, Mask2 = 0,Result =0;
   
  Mask1 =Mask1 <<(Start -1);
  Mask2 =Mask2 >> (32 -End)  
  Mask =      

   Result = No Mask;

    return Result;
}


int main()
{
   UINT Value =0;
   UINT i = 0, j =0;
   UINT Ret = 0;

   printf("plese enter number : \n");
   scanf("%d",&Value);

  
   printf("enter  sarting bit Position  : \n");
   scanf("%d",&i);
  
  
   printf("enter ending bit number : \n");
   scanf("%d",&j);

   Ret = ToggleRange(Value,i,j);

   printf("Updated number is : %d\n",Ret);


    return 0;
}