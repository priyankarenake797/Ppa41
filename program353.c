// Input : 4
// 4 + 3 + 2+ 1 = 10


#include<stdio.h>

int Addition(int No)
{
    static int Sum = 0;
   static  int iCnt = 1;

    while(iCnt <= No)
     {
        Sum = Sum +iCnt;
        iCnt++;
       Addition(No);
     }
  return Sum;
}

int main()
{
   int Value = 0 ;
    int Ret = 0;

   printf("Enter a number : \n");
   scanf("%d",&Value);

   Ret = Addition(Value);
  printf("Addition is : %d\n",Ret);   
   return 0;
}