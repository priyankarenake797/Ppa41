//program18chi copy fakt while loop vaparsl ahe ani user kadun input ghyayach..............

#include<stdio.h>

void Display(int iValue)
{  
   int iCnt = 0;  //initialized value

  iCnt  = 1; //re-initialize      //1
  
  while(iCnt <=iValue)   //2
   {
     printf("Jay Ganesh....\n");   //4

      iCnt++; //3

   }
  
}

int main()
{   int iNo = 0;

    printf("Enter the number for itration \n");
    scanf("%d",&iNo);         

     Display(iNo);
   
    return 0;
}
