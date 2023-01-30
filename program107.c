   
/*
 Row = 4
 clo = 4

  1 $ 3 $
  1 $ 3 $
  1 $ 3 $
  1 $ 3 $

*/


#include<stdio.h>

void Display(int iRow , int jCol) //N
{

  int i = 0, j = 0;
 
  for(i = 1; i<= iRow; i++)
   {
     for(j = 1; j<= jCol;j++)
     {
         if((j % 2) ==0)
       {
       printf("$\t");         
       }
       else
       {
       printf("%d\t",j);
        }         //actual logic nehami inner loop madhe liha....
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





/*
// #############################   next program ahr ha khali  ####################################
*/
   
/*
 Row = 4
 clo = 4

   1 1 1 1
   $ $ $ $
   3 3 3 3
   $ $ $ $ 



#include<stdio.h>

void Display(int iRow , int jCol) //N
{

  int i = 0, j = 0;
 
  for(i = 1; i<= iRow; i++)
   {
     for(j = 1; j<= jCol;j++)
     {
         if((i % 2) !=0)
       {
       printf("%d\t",i);         
       }
       else
       {
       printf("$\t");
        }         //actual logic nehami inner loop madhe liha....
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

*/