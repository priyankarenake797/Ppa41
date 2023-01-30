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
       cout<<"allocate memmory";
       iSize = i;
       Arr = new  int[iSize];   // Arr = (int *)malloc(iSize * sizeof(int)); ......in C

     }

    ~ArrayX()
     {
        cout<<"Deallocate memmory";
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

    ArrayX obj(iLength);  //static   boot gharatun neli
  
    obj.Accept();   // boot vaparali
    obj.Display();  // boot vaparali

// yachya khali 500 line cha code ahe 

   //boot sobat gheun fira 500 line time 

  return 0;
}