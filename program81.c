#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool  CheckOccurence(int Arr[],int iSize,int iNo)
{

     int iCnt = 0;  
  
  for(iCnt = 0; iCnt < iSize ; iCnt++)
   {
     if(Arr[iCnt] == iNo)
      {
           break;          
      }
     if(iCnt == iSize)
     {
       retun -1;

     }
    else
    {
       return iCnt;
    }
   }

}
 

int main()
{
   int *ptr = NULL;

   int iLength = 0 , i = 0 ,iValue = 0 ;
    int iRet = -1; 

   printf("Enter the number of elements\n");
   scanf("%d",&iLength);

    
   ptr =(int *)malloc(iLength * sizeof(int));

      printf("Please Enter the number :");
       for(i = 0; i < iLength ; i++)
      {
        scanf("%d",&ptr[i]);
      }

     printf("Enter the Elemenytts to findout frequency : \n");
     scanf("%d",&iValue);
    
  
   bRet =  CheckOccurence(ptr ,iLength,iValue);  //(call by Adress , call by value);

   printf("frequency of %d is %d \n",iValue,bRet);

     
   free(ptr);   
    
   
    return 0;
}