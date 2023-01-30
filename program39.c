// Accept the number from user is display by Revers order

#include<stdio.h>

void DisplayRevers(int iNo)
{
 int iCnt = 0 ;

   printf("........................................\n");
  for(iCnt = iNo;iCnt >= 1; iCnt--)
   {
     printf("%d\t",iCnt);
   }  
  printf("\n........................................\n");
}

int main()
{
   int iValue = 0;

   printf("Enter the number : \n");
   scanf("%d",&iValue);

   DisplayRevers(iValue);

  return 0; 
}