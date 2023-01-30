#include<iostream>
using namespace std;

//problems on N- numbers

class ArrayX
{
   public:
         int * Arr;
         int iSize;

       ArrayX(int i)
       {
          iSize = i;
          Arr  =new int[iSize];
       }
      void Accept()
      {
       cout<<"Enter the number :"<<"\n";
         int iCnt = 0;
   
         for(iCnt = 0;iCnt < iSize;iCnt++)
         {
            cin>>Arr[iCnt];
          }
      }
};

int main()
{
   
   return 0;
}