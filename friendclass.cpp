#include<iostream>
using namespace std;

class Marvellous   
{
  public:
      void fun(); //member function
      void gun(); //membar function
};


class Demo
{  
  public:
    int i;
  private:
    int j;
  protected:                 
    int k;

   public:
     Demo()
    {
     i = 10;
     j = 20;
     k = 30;
    }

   friend class Marvellous;    //logic 4s
   
};


void Marvellous::fun() //member function 
          { 
   	     Demo obj;        //generally we create objeect on main() function ,but here we create object in naked function
   	     cout<<"Value of i :"<<obj.i<<"\n";
             cout<<"Value of j :"<<obj.j<<"\n";
             cout<<"Value of k :"<<obj.k<<"\n";
          } 

void Marvellous::gun() //mamber function 
          { 
   	     Demo obj;        //generally we create objeect on main() function ,but here we create object in naked function
   	     cout<<"Value of i :"<<obj.i<<"\n";
             cout<<"Value of j :"<<obj.j<<"\n";
             cout<<"Value of k :"<<obj.k<<"\n";
          } 
int main()
{
   Marvellous mobj;
    mobj.fun();  
    mobj.gun();
  
  return 0;
}