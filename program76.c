   // Dry run kelel ahe note book madhe plz refer notebook program 72 ch copy kelay ahe ha program 
//count Even numbers <--------extra add  

#include<stdio.h>
#include<stdlib.h>



//step 5 :  perform the operation on Array

void DisplayEvenOddSum(int Arr[],int iSize)
{
  int iEvenSum = 0 , iCnt = 0 ,iOddSum = 0;  
  
  for(iCnt = 0; iCnt < iSize ; iCnt++)
   {
     if((Arr[iCnt] % 2) == 0)
     {
        iEvenSum = iEvenSum + Arr[iCnt];
       
     }
     else
      {
        iOddSum = iOddSum + Arr[iCnt];
        
      }
   }
  
    printf("Addition number is Even : %d \n",iEvenSum);
    printf("Addition number is odd : %d \n",iOddSum);
}
 

int main()
{
   int *ptr = NULL;

   int iLength = 0 , i = 0 ;

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


    //step 4 : call the function
  
    DisplayEvenOddSum(ptr ,iLength);  //(call by Adress , call by value);
   

     // Deallocate memory
    free(ptr);   //free(500)
    
   
    return 0;
}