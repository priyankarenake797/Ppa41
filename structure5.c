// structure cha array


#include<stdio.h>

 struct Demo
{
  int no;
  float f;
};

  int main()
 {
   struct Demo Arr[3];
  
    Arr[0].no = 11;
    Arr[0].f = 10.9;
   
    
    Arr[1].no = 21;
    Arr[1].f = 90.9;

   
    Arr[2].no = 51;
    Arr[2].f = 78.9;

  printf("size of array : %d \n",sizeof(Arr));
 
   return 0;
}