#include<stdio.h>

int main()
{   char Arr[30];

   printf("Enter your Full name :\n");
  // scanf("%s",Arr);
 
   scanf("%[^'\n']s",Arr);   // important statement ahe hi is called as Regular expression

   printf("Your fullname is : %s\n",Arr);
   return 0;
}