// Input : 4
// 4 + 3 + 2+ 1 = 10


#include<stdio.h>

int Addition(int No)
{
    int Sum = 0;
    int iCnt = 1;

    while(iCnt <= No)
     {
        Sum = Sum +iCnt;
        iCnt++;
     }
  return Sum;
}

int main()
{
   int Value = 0 , Ret = 0;

   printf("Enter a number : \n");
   scanf("%d",&Value);

   Ret = Addition(Value);
  printf("Addition is : %d\n",Ret);   
   return 0;
}