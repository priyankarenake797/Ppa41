// Input : 4
// * * * *


#include<stdio.h>

void DisplayI()
{
   int iCnt = 1;    //Auto storage class

  while(iCnt <= 4)
   {
      printf("*\t");
      iCnt++;
   }

}

void DisplayR()
{
 static  int iCnt = 1;    //static storagre class

    if(iCnt <= 4)
   {
      printf("*\t");
      iCnt++;
     DisplayR();   // Recursive call mhantat....
   }

}

int main()
{
   DisplayR();
   return 0;
}