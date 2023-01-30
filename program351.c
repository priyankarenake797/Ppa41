
//                uder define input
// Input : 4
// * * * *


#include<stdio.h>

void DisplayR(int No)
{
 
  static int iCnt = 1;    //static storagre class

    if(iCnt <= No)
   {
      printf("*\t");
      iCnt++;
     DisplayR(No);   // Recursive call mhantat....
   }

}

int main()
{
    int Value;
   printf("Enter a number \n");
   scanf("%d",&Value);
   DisplayR(Value);

   printf("End of Main\n");

   return 0;
}