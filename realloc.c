#include<stdio.h>
#include<stdlib.h>


int main()
{
      int *p=NULL;

     p = (int *)malloc(10 * sizeof(int));
     
     //use the memmory
     
    p = (int *)realloc(p,15 * sizeof(int));

    // use the memory

   free(p);

    return 0;

}


/* 
     p = (int *)malloc(10 * sizeof(int));  // hi memory tari rahil 

    
     q = (int *)realloc(50 * sizeof(int));// hi memory geli tari   (mhanun variable badalale)




*/
//   p = (int *)realloc(NULL, 10 * sizeof(int)); ---->// internally works as malloc 1st parameter mule
//  p = (int *)realloc(p,0)----------->internally works as free 2nd parameter mule 
//   


