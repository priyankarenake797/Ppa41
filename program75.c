   // Dry run kelel ahe note book madhe plz refer notebook program 72 ch copy kelay ahe ha program 
//count Even numbers <--------extra add  

#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr, int iSize)

//step 5 :  perform the operation on Array

void DisplayEvenOddCount(int Arr[],int iSize)
{
  int iEvenCnt = 0 , iCnt = 0 ,iOddCnt = 0;  
  
  for(iCnt = 0; iCnt < iSize ; iCnt++)
   {
     if((Arr[iCnt] % 2) == 0)
     {
        iEvenCnt++;
       
     }
     else
      {
        iOddCnt++;
        
      }
   }
  
    printf("number is Even : %d \n",iEvenCnt);
    printf("number is odd : %d \n",iOddCnt);
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
  
    DisplayEvenOddCount(ptr ,iLength);  //(call by Adress , call by value);
   

     // Deallocate memory
    free(ptr);   //free(500)
    
   
    return 0;
}