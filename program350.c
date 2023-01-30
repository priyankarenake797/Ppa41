// Input : 4
// * * * *


#include<stdio.h>

void DisplayR()
{
 
  static int iCnt = 1;    //static storagre class

    if(iCnt <= 4)
   {
      printf("*\t");
      iCnt++;
     DisplayR();   // Recursive call mhantat....
   }

}

int main()
{
   printf("Inside Main");

   DisplayR();

   printf("End of Main");

   return 0;
}