#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
   int iSum = 0;

     iSum = iNo1 + iNo2;

     return(iSum);
}
int main()
{
    int iValue1 =0, iValue2 = 0;
     int iRet = 0; 

    printf("Enter First number");
    scanf("%d",&iValue1);

   printf("Enter Second number");
    scanf("%d",&iValue2);

    iRet=Addition(iValue1,iValue2);

   printf("Addition is %d :",iRet);
      
  return 0;
}