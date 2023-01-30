
/////////////////////////////////////problems on N numbers////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class ArrayX        //parent class
{
   public:
     int  * Arr;
     int iSize;
   
    ArrayX(int i)
    {
       cout<<"Allocate memory";
       iSize = i;
       Arr = new  int[iSize];   // Arr = (int *)malloc(iSize * sizeof(int)); ......in C

     }

    ~ArrayX()
     {

       cout<<"Deallocate memory";
        delete []Arr;   //free(Arr);
    }

   void Accept()
   {
      cout<<"Enter the element of array :"<<"\n";

        for(int iCnt = 0; iCnt < iSize ; iCnt++)
        {
          cin>>Arr[iCnt];         // scanf("%d",&Arr[iCnt]);
        }
    }

    void Display()
   {
      cout<<"Enter the element of array :"<<"\n";

        for(int iCnt = 0; iCnt < iSize ; iCnt++)
        {
          cout<<Arr[iCnt]<<"\t";         // printf("%d",Arr[iCnt]);
        }
        cout<<"\n";
    }

   
};

class MarvellousLB : public ArrayX           //chield class
{
   public:
     MarvellousLB(int i) : ArrayX(i)                //Base member initialization 
      { }
   

void Function()
   {
        // Logic

   }



};

int main()
{
    int iLength = 0  ,iRet = 0;
    cout<<"Enter  the size of array :"<<"\n";
    cin>>iLength;

    MarvellousLB  * obj = new MarvellousLB(iLength);
   
       obj->Accept();
       obj->Display();

    iRet = obj->Minimum();

    cout<<"smallest element is "<<iRet<<"\n";

   delete obj;  
  return 0;
}