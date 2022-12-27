
    // execution chi sequence kashi execute hote yasathi ha program ahe 

#include<stdio.h>


int Addition(int iNo1, int iNo2)
{
   int iAns=0;
   iAns = iNo1 + iNo2;    // buisness logic
   return iAns;
}


int main()
{

    int iValue1=0; 
    int iValue2=0;
    int iRet = 0;

   printf("Enter first number\n");   // u give to largest valu upto 2^31
   scanf("%d",&iValue1);


   printf("Enter Second number\n");
   scanf("%d",&iValue2);

    iRet = Addition(iValue1,iValue2);


  printf("Addition of two numbers iss : %d\n",iRet);
     return 0;
}