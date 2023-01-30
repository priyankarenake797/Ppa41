#include<iostream>
using namespace std;

//problems on numbers

class Numbers
{
   public:
       int iNo;

    Numbers(int i)
    {
       iNo = i;
    }  
 
   int Factorial()   //here you want to place function with buisness logic
    {
        int iFact = 1;
        int iCnt =0;
  
        for(iCnt = 1;iCnt <=iNo; iCnt++)
         {

            iFact = iFact * iCnt;
         }
         return iFact;
    }
};


int main()
{
    int iValue = 0,iRet = 0;

   cout<<"Enter number : \n";
   cin>>iValue;

    Numbers obj(iValue);

     iRet = obj.Factorial();
   cout<<"Factorial is : \n"<<iRet<<"\n";
   return 0;
}