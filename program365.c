#include<stdio.h>

int  CountSmallR(char *str)
{
  static int iCnt = 0;
  
  if(*str != '\0')
   {
     if(*str >= 'a' && *str <= 'z')
      {
      iCnt++;
     }

     str++;
    CountSmallR(str);
 }
return iCnt;
}

int main()
{
   char Arr[20];
  int iRet = 0;

  printf("Enter string :\n");
  scanf("%[^'\n']s",Arr);

  iRet =  CountSmallR(Arr);

  printf("Small letter  is : %d \n",iRet);

   return 0;
}
