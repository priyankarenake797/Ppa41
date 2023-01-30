#include<iostream>
using namespace std;

class Array
{
     public:
       int iSize;
       int *Arr;
     Array(int iLength)
     {
        cout<<"Inside constructor : \n";
       iSize = iLength;
       Arr = new int[iSize];

     }
    
   void Accept()
   {
      cout<<"Enter the value\n";
      int i = 0;
      for(i = 0,i < iSize; i++)
        {
           cout<<Arr[i]<<"\n"; 
         }
   }

   void Display()
   {
      cout<<"Enter the elements :\n";
      int i = 0;
      for(i = 0,i < iSize; i++)
        {
           cout<<Arr[i]<<"\n"; 
         }
   }
   
  int Summation()
   {
      int iSum = 0, i = 0;
        



   }
   
   
   ~Array()
    {
      delete []Arr;    //array chi adavi patti rough kar yasathi [] vaparala jato jar nahi lihil tar 0th index jail bakichi memory
                       //tashich rahil. 
    }
-    
};


int main()
{     
    int iRet = 0 ;

     Array obj1(4);
    obj1.Accept();
    obj1.Display();
    iRet = obj1.Summation();
   cout<<"Summation of all elements :";
  return 0;
}