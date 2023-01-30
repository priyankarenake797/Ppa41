

#include<stdio.h>

int Difference(char *str)
{
  int iCnt = 0;
 
  while(*str != '\0')
  {
    if((*str == 'a')  && (*str =='A'))
    {
      iCnt++;
    }
    str++;
  }

  return iCnt;
}




int main()
{   char Arr[20];   // static memory allocation
     int iRet = 0;

   printf("Please enter string :\n");
   scanf("%[^'\n']s",Arr); 

   iRet = Difference(Arr);  
  
  printf("%d\n",iRet);  

   return 0;
}