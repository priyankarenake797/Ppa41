#include<iostream>
using namespace std;

class Marvellous   
{
  public:
      void fun(); //Naked function means outoff class 
      void gun();     //logic extra function add as a gun
};


class Demo
{  
  public:
    int i;
  private:
    int j;
  protected:                  //there is 0 behavier in class Demo() contructor sodun 
    int k;

   public:
     Demo()
    {
     i = 10;
     j = 20;
     k = 30;
    }

   friend void Marvellous::fun();    //void fun() is prototype
   friend void Marvellous::gun();
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