 
#include<stdio.h>

void Pattern(int iNo)
{
  int   iCnt = 0;
     char ch = 'A';

     if(iNo < 0)
      {
         iNo = -iNo;
      }
  
     for(iCnt =1; iCnt <= iNo; iCnt++) //N
    {
       printf("%c \t" , ch);   //fixed data...
       ch++;
    }
  printf("\n");
}

int main()
{
  int iValue = 0;
  printf("Enter a number :");
  scanf("%d",&iValue);

  Pattern(iValue);
  return 0;
}