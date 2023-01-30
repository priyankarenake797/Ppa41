#include<iostream>
using namespace std;

template <class T>

T Addition(T Arr[] , int iSize)   // iSize int ch thevayacha compulsory
{
    int iCnt = 0;    // counter pan integer ch thevayacha 

     T Sum ;
   for(iCnt =  0; iCnt < iSize ; iCnt++)
   {
      Sum = Sum + Arr[iCnt];
   }
  return Sum;
}
int main()
{
   int Data [] = {10,20,30,40};
int iRet  = Addition(Data , 4);

  cout<<"addition of Integer :"<<iRet<<"\n";

 
   float Dataf [] = {10.2f,20.7f ,30.8f ,40.9f};
float fRet  = Addition(Data , 5);

  cout<<"addition of float:"<<fRet<<"\n";
   return 0;
}