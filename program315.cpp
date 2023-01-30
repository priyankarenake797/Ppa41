#include<iostream>
using namespace std;

class ArrayX
{
    public:

    int *Arr;
   int iSize;

    ArrayX(int i)
   {
      iSize = i;
     Arr = new int [iSize];
   }

   void Accept()
   {
       cout<<"Enter the elements "<<"\n";
     for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
      {
         cin>>Arr[iCnt];
      }

   }

  void Display()
  {
    cout<<"Enter the elements "<<"\n";
     for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
      {
         cout<<Arr[iCnt]<<"\n";
      }


   }



}

int main()
{

   return 0;
}