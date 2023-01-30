   // Dry run kelel ahe note book madhe plz refer notebook program 72 ch copy kelay ahe ha program 
//calculate numbers frequency code 

#include<stdio.h>
#include<stdlib.h>



//step 5 :  perform the operation on Array

int CalculateFrequency(int Arr[],int iSize,int iNo)
{

     int iCnt = 0 ,iFrequency = 0;  
  
  for(iCnt = 0; iCnt < iSize ; iCnt++)
   {
     if(Arr[iCnt] == iNo)
      {
           iFrequency++;
      }
   }
  return iFrequency;
}
 

int main()
{
   int *ptr = NULL;

   int iLength = 0 , i = 0 ,iValue = 0 , iRet = 0;

    //step 1 : Accept size of array
   printf("Enter the number of elements\n");
   scanf("%d",&iLength);

   //ptr = (int *)malloc(5 * 4)
  //Step 2 : allocate memory for array
   ptr =(int *)malloc(iLength * sizeof(int));


     //step 3 : Accept the eleents of array
      printf("Please Enter the number :");
       for(i = 0; i < iLength ; i++)
      {
        scanf("%d",&ptr[i]);
      }

     printf("Enter the Elemenytts to findout frequency : \n");
     scanf("%d",&iValue);
    //step 4 : call the function
  
  iRet =  CalculateFrequency(ptr ,iLength,iValue);  //(call by Adress , call by value);
   printf("frequency of %d is %d \n",iValue,iRet);

     // Deallocate memory
    free(ptr);   //free(500)
    
   
    return 0;
}