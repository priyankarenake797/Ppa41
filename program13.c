
// variation 2 divisible by 3 and 5  ithe if else chya jodya jodya pahije mhanje warning yet nahi
//dont use nested if.... else

// this program on number is divisible by 3 and also 5.............variation ahet pudhe

#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
   if((iNo % 3 ==0))
    {
      if(iNo % 5== 0)
       {
       return true;
       }
      else
      {
         return false;
      }
    } 
    else
    { 
       return false;
    }
}

int main()
{  
  int iValue = 0;
  bool bRet = false;
  
  printf("Enter the number : \n");
  scanf("%d",&iValue);
   
   bRet = DivisibleByThreeAndFive(iValue);

     if(bRet == true)
      {
    printf("Number is divisible by 3 and 5\n");
       }
    else
     {
       printf("Number is not divisible by 3 or 5\n");
      }


  return 0;
}