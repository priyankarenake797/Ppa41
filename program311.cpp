#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[] , int iSize)   // iSize int ch thevayacha compulsory
{
    int iCnt = 0;    // counter pan integer ch thevayacha 

   for(iCnt =  0; iCnt < iSize ; iCnt++)
   {
     cout<<Arr[iCnt]<<"\n";
   }

}
int main()
{
   int Data [] = {10,20,30,40};

   Display(Data, 4);

  return 0;
}