
   // fakt i chi row change kel  printf("%d\t",i); 
/*
 Row = 4
 clo = 4

  1 1 1 1
  2 2 2 2
  3 3 3 3
  4 4 4 4
*/


#include<stdio.h>

void Display(int iRow , int jCol) //N
{
   char ch = 'A';
   char ch1 = 'a';
  int i = 0, j = 0;
 
  for(i = 1; i<= iRow; i++)
   {
     for(j = 1; j<= jCol;j++)
     {
         if((i % 2) ==0)
       {
       printf("%c",ch);
       ch++;
                 
       }
       else
       {
       printf("%c",ch1);
       ch++;
        }        
     }
   printf("\n");
   }
}
   
  
int main()
{
  int iValue1 = 0 , iValue2 = 0;

  printf("Enter a number of rows \n :");
  scanf("%d",&iValue1);
  
  printf("Enter a number of coloums \n :");
  scanf("%d",&iValue2);


   Display(iValue1,iValue2);
  return 0;
}