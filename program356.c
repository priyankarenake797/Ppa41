#include<stdio.h>

void FactorsI(int No)
{
   static int iCnt = 1;
  
    if(iCnt <=(No / 2))
      {
        if((No % iCnt ) == 0)
         {
          printf("%d\n",iCnt);
         }
       
        iCnt++;
       FactorsI(No);
    }
}

int main()
{
   int Value = 0 ;
    
   printf("Enter a number : \n");
   scanf("%d",&Value);

   FactorsI(Value);
     
   return 0;
}