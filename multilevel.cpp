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


  class DerivedX : public Derived
   {

         public:
             int i,j;
  
         DerivedX()
          {
            cout<<"Inside derivedX constrcutor \n";
          }

  
           ~DerivedX()
          {
            cout<<"Inside derivedX destrcutor \n";
          }
     
        void sun()
        {
           cout<<"Inside sun of derivedX \n";
        }
   };
int main()
{
   cout<<"Size of Base  :"<<sizeof(Base)<<"\n";
   cout<<"Size of Derived  :"<<sizeof(Derived)<<"\n";
   cout<<"Size of DerivedX  :"<<sizeof(DerivedX)<<"\n";
    
       // Dynamic memory allocatiomn

     DerivedX *ptr = NULL;
   
    ptr = new DerivedX;   //16 byte memory allocation in intarnally work as malloc 
   
    ptr->fun();
    ptr->gun();
    ptr->sun();
   
    delete ptr;    
    return 0;

        // static memory allocation madhe object kasa create karayacha
  //DerivedX dobj;
 // dobj.fun();
//dobj.gun();
//dobj.sun();

}