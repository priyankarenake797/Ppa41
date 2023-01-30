//*******************************this is Templet for next program*****************************************

/////////////////////////////////////problems on N numbers////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class ArrayX
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

int main()
{
    int iLength = 0;
    cout<<"Enter  the size of array :"<<"\n";
    cin>>iLength;
    ArrayX * obj = new ArrayX(iLength);  //Dynamic   boot ghetale

    obj->Accept();  // boot vaparali
    obj->Display();  //boot vaparali
   
     delete obj;        //delete ya word mule destructor call hoto automatically   ........boot deun takali

  return 0;
}