
//4

//4 3 2 1

#include<stdio.h>

void Pattern(int iNo)
{
  int   iCnt = 0;

     if(iNo < 0)
      {
         iNo = -iNo;
      }
   for(iCnt =iNo; iCnt > 0; iCnt--)
   {
     printf("%d#\t",iCnt);
    }
  printf("\n");
}

int main()
{
  int iValue = 0;
  printf("Enter a number : \n");
  scanf("%d",&iValue);

   Pattern(iValue);
  return 0;
}