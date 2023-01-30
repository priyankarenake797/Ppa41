#include<stdio.h>
#include<stdlib.h>

 int main()
{
     int Arr[5];     //static memory allocation
   
     int *p = NULL;   // 0th address la point karato  it is good programming practice

    p = (int *)malloc(sizeof(int) * 5);
        // int * mhanje tukade karan it is type casting
    // use the memory
    free(p);


      //code



     return 0;    //memory of Arr gets deallocated at this point
}