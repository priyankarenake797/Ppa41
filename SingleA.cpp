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
    
       cout<<"Inside Base constructor \n";

     }

     ~Base()
     {
       cout<<"Inside Base destructor \n";

     }
     void fun()
     {
         
      cout<<"Inside Base fun\n";

     }

  
     void gun()
     {
         
      cout<<"Inside Base gun\n";

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

int main()
{
    Base bobj;
    Derived dobj;
}