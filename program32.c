//time complexity reduced karayach kas ani time complexity is only for loop 

#include<stdio.h>

//0(N/2)
void DisplayFactors(int iNo)
{
  int iCnt = 0;
   
   printf("Factors are : \n");
    
   for(iCnt = 1 ; iCnt <=(iNo/2); iCnt++)  // time complexity means redused the time
   {
     if((iNo % iCnt) == 0)
      {
         printf("%d\n",iCnt);
      }

    }
  
}

int main()
{
   int iValue = 0;
   printf("Enter number : \n");
   scanf("%d",&iValue);
   
     DisplayFactors(iValue);

   return 0;
}