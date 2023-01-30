#include<stdio.h>
#include<string.h>


int main()
{
  char Arr[10] = "Hello";
  char * Ptr = Arr;

  while(*Ptr != '\0')
   {
    iCnt++;
    Ptr++;
   }

  printf("Length of string is : %d\n",iCnt);
   return 0;
}