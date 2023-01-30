#include<stdio.h>


void DisplayDigit(char *str)   //*str is not string it is pointer
{

  while(*str !='\0')
   {
  if((*str >= 48)  &&  (*str <= 57))
     {
      printf("true");
     }
    else
    {
      printf("false");
    }
}

}

int main()
{ 
   char Arr[20];

  printf("Please enter string\n");
  scanf("%[^'\n']s",Arr);

  DisplayDigit(Arr); 

   return 0;
}