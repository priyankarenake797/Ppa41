#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[] , int iSize)   // iSize int ch thevayacha compulsory
{
    int iCnt = 0;    // counter pan integer ch thevayacha 

     T Max = Arr[0];
   for(iCnt =  0; iCnt < iSize ; iCnt++)
   {
     if(Arr[iCnt] > Max)
     {
         Max = Arr[iCnt];
     }
   }
  return Max;
}
int main()
{
   int Data [] = {101,201,301,401};
int iRet  = Maximum(Data , 4);

  cout<<"Maximum of Integer :"<<iRet<<"\n";

 
   float Dataf [] = {10.2f,20.7f ,30.8f ,40.9f};
float fRet  = Maximum(Data , 5);

  cout<<"maximum of float :"<<fRet<<"\n";
   return 0;
}