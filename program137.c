// for loop vaprun string mojali 

#include<stdio.h>

int strlenX(char str[])
{
   int iCnt = 0 , i=0;
  
  for(i = 0; str[i] !='\0'; i++)  //only here change
   {
      iCnt++;
      
   }
   return iCnt;
}
n

int main()
{   char Arr[20];   // static memory allocation
     int iRet = 0;

   printf("Please enter string :\n");
   scanf("%[^'\n']s",Arr); 

   iRet = strlenX(Arr);  //strlenX(100)
  
  printf("Number of character are %d\n",iRet);  

   return 0;
}