#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
  int iCnt = 0, iSum = 0;
  //  1              2          3 
  for(iCnt = 0; iCnt <iSize ; iCnt++ )
  {

    iSum = iSum + Arr[iCnt]; //4    
  }
    return iSum;
}

int main()
{
   int *ptr = NULL;
   
   int iCnt = 0 , iRet = 0 , iLength = 0;
   
   printf("enter the number of elements u want gto store : \n");
   scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    
   printf("Enter the elements : \n");
       // 1     2          3
   for(iCnt = 0; iCnt < iLength;iCnt++) 
   {
     scanf("%d",&ptr[iCnt]); //4
   }
   printf("Elements from array are : \n ");

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
     printf("%d\n",ptr[iCnt]);
    }

  iRet = Summation(ptr,iLength);  
          
  printf("Addition of all elements is :%d \n",iRet);
  
   free(ptr); 
  return 0;
}