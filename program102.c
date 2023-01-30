//templet file   ....(hi original nanatar yachi copy karun anek files create karata yeil)
/* 
   Row = 4
   col = 4

   1  2  3  4
   1  2  3  4
   1  2  3  4
   1  2  3  4
*/

#include<stdio.h>

void Display(int iRow , int jCol) //N
{

  int i = 0, j = 0;
 
  for(i = 1; i<= iRow; i++)
   {
     for(j = 1; j<= jCol;j++)
     {
       printf("%d\t",j);                         //actual logic nehami inner loop madhe liha....
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