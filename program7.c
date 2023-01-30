
// Program7 is simple multiplication but used in function()

#include<stdio.h>

int Multiplication(int iValue1 , int iValue2)    //dukanat pishvit milalela data
{  
   int iAns = 0;
   iAns = iValue1 * iValue2;
   return iAns;
}

int main()
{

   int iNo1 = 0, iNo2 = 0 ;
   int iMult = 0;
   
   printf("Enter first number : \n");
   scanf("%d",&iNo1);

   printf("Enter Second number : \n");
   scanf("%d",&iNo2);     //user kadun ghenyasathi used kartat

   printf("Enter first number is :%d \n",iNo1);
   printf("Enter Second number is:%d \n",iNo2);

     iMult = Multiplication(iNo1,iNo2);      //gharatun neleli pishavi

   printf("\n Multiplication is : \n%d\n ",iMult);

      return 0;
}