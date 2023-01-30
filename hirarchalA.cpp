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

class Derived1 : public Base   //inheritance statement
{

         public:
              int X,Y;
           
         Derived1()
          {
            cout<<"Inside derived1 constrcutor \n";
          }

  
           ~Derived1()
          {
            cout<<"Inside derived1 destrcutor \n";
          }
     
        void sun()
        {
           cout<<"Inside sun of derived1 \n";
        }
 };


  class Derived2: public Base
   {

         public:
             int j, k;
  
         Derived2()
          {
            cout<<"Inside derived2 constrcutor \n";
          }

  
           ~Derived2()
          {
            cout<<"Inside derived2 destrcutor \n";
          }
     
        void run()
        {
           cout<<"Inside run of derived2 \n";
        }
   };
int main()
{
    Base bobj;
    Derived1 dobj1;
    Derived2 dobj2;
        
  return 0;
}