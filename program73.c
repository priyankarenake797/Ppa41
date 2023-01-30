   // Dry run kelel ahe note book madhe plz refer notebook program 72 ch copy kelay ahe ha program 
//count Even numbers <--------extra add  
// demo file dont exicute just used for demo
#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr, int iSize)

//step 5 perform the operation on Array

float Average(int Arr[],int iSize)
{
  //Logic


}
 

int main()
{
   int *ptr = NULL;

   int iLength = 0 , i = 0;

   float iRet = 0.0f;

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
   //iRet = Average(500,5);
                   
    ........ = ....(.... ,....);  //(call by Adress , call by value);
    printf("Average is : %f\n",fRet);

     // Deallocate memory
    free(ptr);   //free(500)
    
   
    return 0;
}