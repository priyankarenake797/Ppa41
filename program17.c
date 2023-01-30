//How  to designed a loop   take input from user

#include<stdio.h>

void Display(int iValue)
{  
   int iCnt = 0;
  for(iCnt = 1; iCnt <=iValue ; iCnt++)
  {
   printf("Jay Ganesh\n");
   
  
  }
  
}

int main()
{   
     int iNo1 = 0;
     printf("Enter how many number for Iteration :\n");
     scanf("%d",&iNo1);
     Display(iNo1);
   
    return 0;
}
