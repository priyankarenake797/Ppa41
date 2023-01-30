///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Steps to follow while programming
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//step 1 Understand the problem statement
//step 2 write the algorithem
//step 3 Decide the programmimg language
//step 4 Write the program 
//step 5 Test the program


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem statement : Accept number from user and check whethere it is divisible buy 5 or not
//Input :    23
//Output :   23 is not divisible by 5
//Input : 25
//Output : 25 is divisible by 5
//Input : -20
//Output : -20 is divisible by 5
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Algorithem....matrathit liha ,to aplya sathi asto
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
   START
       Accept number from user as NO
       Divide that NO by 5 and check the value of remainder
       If the Value is 0
            Then display as NO is divisible by 5
       Otherwise 
         display as NO is not  divisible by 5
   END
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  function header
// Function Name : DivisibleByFive
// Description :   To check whether input is divisible by 5 or not
// Input :         Integer
// Output :        Integer
// Author :        Priyanka Deepak Kadam (176LG_priyanka)
// Date :          12/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int DivisibleByFive(int iNo)
{  
  int iAns = 0;
  iAns = iNo % 5;

    if(iAns == 0)
     {
       return 1; 
     }
     else
     {
       return 0;
     }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Entry point of the application
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
   int iValue = 0;
   int iRet = 0;
  
  printf("Enter number : \n");
  scanf("%d",&iValue);

   iRet = DivisibleByFive(iValue);
    if(iRet == 0)
      {
    printf("%d is not divisible by 5\n",iValue);
       }
    else
     {
       printf("%d is divisible by 5\n",iValue);
      }
   
   
   return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Result
///////////////////////////////////////////////////////////////////////////////////////////////////////////////