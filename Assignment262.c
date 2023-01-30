#include<stdio.h>


void struprX(char *str)   //*str is not string it is pointer
{
  while(*str !='\0')
   {
      if((*str >= 'a') && (*str <= 'z'))
       {
         *str = *str - 32;
       }
     str++;
   } 
}

int main()
{ 
   char Arr[20];

  printf("Please enter string\n");
  scanf("%[^'\n']s",Arr);

  struprX(Arr);  // struprX(100); call by address

  printf("String after conversion is : %s\n",Arr);


   return 0;
}