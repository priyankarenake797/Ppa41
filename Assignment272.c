#include<stdio.h>

int CountFrequency(char *str, char ch)
{
  int iCnt = 0;
 
  while(*str != '\0')
  {
    if(*str == ch) 
    {
       printf("Chracter is :\n");
       scanf("%d",&ch);

      iCnt++;
    }
    str++;
  }

  return iCnt;
}

int main()
{
  char Arr[10];
 
  int iRet = 0;

  printf("Please enter string\n");
  scanf("%[^'\n']s",Arr);

   iRet = CountFrequency(Arr,'a');

   printf("Frequency of letters is :%d\n",iRet);

  return 0;
}

