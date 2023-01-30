#include<iostream>
using namespace std;



class Marvellous  //logic 2  
{
  public:
      void fun(); //Naked function means outoff class //fun declared only
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

   friend void Marvellous::fun();    //void fun() is prototype // logic ....
};


void Marvellous::fun() //Naked function means outoff class 
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
  return 0;
}