#include<iostream>
using namespace std;

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

   friend void fun();    //void fun() is prototype  //logic 1
};
  
 void fun()  //Naked function mans outoff class    //logic 2
{
   Demo obj;        //generally we create objeect on main() function ,but here we create object in naked function
   cout<<"Value of i :"<<obj.i<<"\n";
   cout<<"Value of j :"<<obj.j<<"\n";
   cout<<"Value of k :"<<obj.k<<"\n";
}


int main()
{
    fun();  
  return 0;
	}