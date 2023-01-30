#include<iostream>
using namespace std;

  class Base
   {
     public:
       int A,B;
     
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
   };

 class Derived : public Base   //inheritance statement
   {

         public:
             int X,Y;
  
         Derived()
          {
            cout<<"Inside derived constrcutor \n";
          }

  
           ~Derived()
          {
            cout<<"Inside derived destrcutor \n";
          }
     
        void gun()
        {
           cout<<"Inside gun of derived \n";
        }
   };

int main()
{
    Derived *ptr = NULL;
   
    ptr = new Derived;   //16 byte memory allocation in intarnally work as malloc 
   
    ptr->fun();
    ptr->gun();

    delete ptr;    
    return 0;
}