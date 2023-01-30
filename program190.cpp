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
 
   void Function()   //here you want to place function with buisness logic
    {
        // Logic
    }
};


int main()
{
    int iValue = 0;

   cout<<"Enter number : \n";
   cin>>iValue;

    Numbers obj(iValue);

   return 0;
}