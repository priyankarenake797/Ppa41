#include<stdio.h>

void DisplaySchedule(char chdiv)
{
   char A,B,C,D;

    

  switch(chdiv)
   {
      A : printf("Your exam at 7 AM\n");
              break;
      B : printf("Your exam at 8.30 AM\n");
              break;
      C : printf("Your exam at 9.30 AM\n");
              break;
      D : printf("Your exam at 10.30 AM\n");
              break;
    default : printf("sorry wrong time....\n");
              break;
    } 
}

int main()
{
    char cValue = '\0';
   

     printf("Enter your devision");
     scanf("%c",&cValue);

     DisplaySchedule(cValue);

   return 0;
}