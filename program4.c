
#include<stdio.h>

int AdditionOfNumber(int iNo1, int iNo2)
{
  int iAns = 0;

  iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
     int iValue1 = 0, iValue2 = 0;
     int iRet = 0;
    
     printf("Enter first number : \n");
     scanf("%d",&iValue1);


    printf("Enter Second number : \n");
     scanf("%d",&iValue2);
    
     iRet = AdditionOfNumber(iValue1,iValue2);
    
    printf("Addition is : %d\n",iRet);



     return 0;

}