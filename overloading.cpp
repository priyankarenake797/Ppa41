#include<iostream>
using namespace std;


class Overloading
{

      public:    // Add@2ii    name mangling            //1000
             int Add(int a, int b)
             {
                cout<<"Addition of 2 integers \n";
             
             }
                //Add@2ff                               //2000
            float Add(float a, float b)
             {
                cout<<"Addition of 2 floats \n";
             }
                 //Add@2dd                              //3000
           double Add(double a, double b)
             {
                cout<<"Addition of 2 doubles \n";
             }
                  //Add@3iii                           //4000
            int Add(int a, int b, int c)
             {
                cout<<"Addition of 3 integer \n";
             }
                //Fun@2if
            void Fun(int a,float b)    
             {}
                //Fun@2fi                    // data type cha sequence change kela mhanun parameter vegale deu shaklo.
            void Fun(float x,int y)
             {}
};
    
int main()
{
    Overloading obj;
     int i;
     float f;
      double d;

    
   i = obj.Add(11,21); 
      cout<<i<<"%d\n";                      // call 1000  
   i = obj.Add(11,21,51);      // 4000
      cout<<i<<"\n";                      
   d =  obj.Add(10.1,10.33);      //3000
      cout<<d<<"\n";                      
   f = obj.Add(10.1f,10.33f);  // 2000
      cout<<f<<"\n";                      
       
    return 0;



 }



/*

 sizeof('A')  //1
sizeof(11)     //4
sizeof(88.90) //8
sizeof(88.90f) //4


int i =10;

                      

*/











   