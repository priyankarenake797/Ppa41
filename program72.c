   // Dry run kelel ahe note book madhe plz refer notebook 

#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr, int iSize)

float Average(int Arr[],int iSize)
{
  int iSum = 0 , iCnt = 0;  
  
  for(iCnt = 0; iCnt < iSize ; iCnt++)
   {
      iSum = iSum + Arr[iCnt];
   }
  return  (iSum/iSize);
}
 

int main()
{
   int *ptr = NULL;
   int iLength = 0 , i = 0;
   float fRet = 0.0f;

   printf("Enter the number of elements\n");
   scanf("%d",&iLength);

   //ptr = (int *)malloc(5 * 4)
   ptr =(int *)malloc(iLength * sizeof(int));

   printf("Please Enter the number :");
     for(i = 0; i < iLength ; i++)
      {
        scanf("%d",&ptr[i]);
      }

   //fret = Average(500,5);
                   
    fRet = Average(ptr ,iLength);  //(call by Adress , call by value);
    printf("Average is : %f\n",fRet);

    free(ptr);   //free(500)
  return 0;
}