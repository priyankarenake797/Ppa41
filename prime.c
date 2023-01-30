#include<stdio.h>

int prime(int No1)
{
  int   iCnt = 0 , prime1 = 0 , count = 0;
 
   for(iCnt = 2 ; iCnt <= No1/2 ;iCnt++)
   {
      if((No1 % iCnt) == 0)
       {
          count ++;
          break;       
        }
   }
   
    if((count == 0 ) && (No1 != 1))
     {
       printf("%d is prime number ",No1);
    }  
   else
    {
      printf("%d in not prime number ",No1);
   } 

}

int main()
{   int no ;

   printf("emter your number :");
   scanf("%d",&no);

    prime(no); 

    return 0;
}