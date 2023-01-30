
//  program6 is simple multiplication


#include<stdio.h>

int main()
{

   int iNo1 = 0, iNo2 = 0 ;
   int iMult = 0;
   
   printf("Enter first number : \n");
   scanf("%d",&iNo1);

   printf("Enter Second number : \n");
   scanf("%d",&iNo2);     //user kadun ghenyasathi used kartat

   printf("Enter first number is :%d \n",iNo1);
   printf("Enter Second number :%d \n",iNo2);

    iMult = iNo1 * iNo2;  // buisness logic
    printf("\nMultiplication is : \n%d\n ",iMult);

  return 0;
}