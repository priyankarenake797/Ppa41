#include<stdio.h>


int CountWhite(char *str)   //*str is not string it is pointer
{
    int iCnt = 0;

  while(*str !='\0')
   {
     if(*str == ' ')
      {
        iCnt++;
      }
      str++;
   } 
    return iCnt ;
}

int main()
{ 
   char Arr[20];
    int iRet = 0;
  printf("Please enter string\n");
  scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);  // strlwr(100); call by address

  printf("Number of white space are : %d\n",iRet);


   return 0;
}