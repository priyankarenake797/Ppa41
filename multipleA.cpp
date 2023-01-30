#include<iostream>
using namespace std;

  class Base1
   {
     public:
       int i;
     float f;
      

     Base1()
    {
    
       cout<<"Inside Base1 constructor \n";

     }

     ~Base1()
     {
       cout<<"Inside Base1 destructor \n";

     }
     void gun()
     {
         
      cout<<"Inside Base1 gun\n";

     }
};



  class Base2
   {
     public:
       int j;
     float g;
      

     Base2()
    {
    
       cout<<"Inside Base2 constructor \n";

     }

     ~Base2()
     {
       cout<<"Inside Base2 destructor \n";

     }
     void fun()
     {
         
      cout<<"Inside Base2 fun\n";

     }
};

 class Derived : public Base1,Base2   //inheritance statement
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
    
    Derived dobj;
}