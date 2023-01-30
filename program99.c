//4

/*

  *  *  *  * 
  *  *  *  * 
  *  *  *  * 
  *  *  *  *   
*/
#include<stdio.h>

void Display(int iNo) //N
{
     int iCnt = 0;
     char ch = 'a';

     if(iNo < 0)
      {
         iNo = -iNo;
      }
  
     for(iCnt =1; iCnt <= iNo; iCnt++, ch++) 
    {
       printf("* \t");   
    }
     printf("\n");
    for(iCnt =1; iCnt <= iNo; iCnt++, ch++) 
    {
       printf("* \t");   
    }
     printf("\n");

    for(iCnt =1; iCnt <= iNo; iCnt++, ch++) 
    {
       printf("* \t");   
    }
      printf("\n");

    for(iCnt =1; iCnt <= iNo; iCnt++, ch++) 
    {
       printf("* \t");   
    }
  printf("\n");
}

int main()
{
  int iValue = 0;
  printf("Enter a number :");
  scanf("%d",&iValue);

   Display(iValue);
  return 0;
}
