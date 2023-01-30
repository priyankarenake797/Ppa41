#include<iostream>             // stream means like pipe of input & output

using namespace std;           // eg.... in mall cloaths by using name to relate cloaths like kids,women,mens ...cloaths 

                          
    
          // class declartion
     class Maths                   
{

      public:                 // Accesss Specifier     &  public means any one can accesss
          int iNo1;           //Characteristics  (data) or (variables)
          int iNo2;           //Characteristics

      Maths()                     // Constructor (Default)  constructor la return value nasate
        {
           cout<<"Inside Default constructor\n";
           iNo1 = 0;
           iNo2 = 0;
          
        }

      Maths(int A,int B)           // Constructor (parameterised)  constructor la return value nasate
        {
           cout<<"Inside parametrised constructor\n";
           iNo1 = A;
           iNo2 = B;
          
        }


     // int Addition(Maths *this)

     int Addition()               // Behaviour(Normalfunction)
      {
          return iNo1 + iNo2;

       }


      ~Maths() // tilda operator used
       {
         cout<<"Inside Destructor\n";   // 2 times call for mobj1 & mobj2

           //Destructor
       }

        //int Substraction(Maths *this)
       
       int Substraction()       // Behaviour
      {
          return iNo1 - iNo2;

       }
};

int main()
{
      cout<<"Inside main function\n";
      Maths mobj1;                        // 8 byte
      Maths mobj2(11,10);                 // 8byte
    

    int ret = 0;
     ret = mobj2.Addition();   //  internally c madhe convert hotana ch logic-> ret=Addition(&mobj2); 
                               //ret=Addition(200);
    
     cout<<"Addition is :"<<ret<<"\n";
     
   ret = mobj1.Addition();     //ret=Addition(&mobj1);  
                               //ret=Addition(100);          .
   cout<<"Addition is :"<<ret<<"\n";


    return 0;
}