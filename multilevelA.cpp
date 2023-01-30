#include<iostream>
using namespace std;

  class Base
   {
     public:
       int i;
      float f;
      double d;

     Base()
    {
    
       cout<<"Inside Base constrctor \n";

     }

     ~Base()
     {
       cout<<"Inside Base destrctor \n";

     }
     void fun()
     {
        cout<<"Inside Base fun\n";
     }
    
    void gun()
        {
           cout<<"Inside gun of base \n";
        }
};

class Derived : public Base   //inheritance statement
{

         public:
              int i;
            double d;

  
         Derived()
          {
            cout<<"Inside derived constrcutor \n";
          }

  
           ~Derived()
          {
            cout<<"Inside derived destrcutor \n";
          }
     
        void sun()
        {
           cout<<"Inside sun of derived \n";
        }
 };


  class DerivedX : public Derived
   {

         public:
             int k;
  
         DerivedX()
          {
            cout<<"Inside derivedX constrcutor \n";
          }

  
           ~DerivedX()
          {
            cout<<"Inside derivedX destrcutor \n";
          }
     
        void run()
        {
           cout<<"Inside run of derivedX \n";
        }
   };
int main()
{
    Base bobj;
     Derived dobj;
     DerivedX dobj1;
        
  return 0;
}