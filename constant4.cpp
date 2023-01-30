#include<iostream>
using namespace std;

class Demo
{   
   public:
     int i,j;
  
  // parametrised constructor with DEFAULT values
  Demo(int x = 10, int y = 20)   //3 verity cha constructor used hoto 1)default constructor 2)1 parametrisied cons. 3)2 parametrised constructor
   {
     i = x;
     j = y;
   }

  void fun()
  {
    i++;
    j++;
  }

  void gun() const     //function (behaviour) constant ahe .
  {
   i++;
   j++;
  }

};

int main()
{
    Demo obj1;              // 10 20
    Demo obj2(11);         //11 20
    Demo obj3(11,21);     // 11 21
   
    obj3.fun();
    obj3.gun();

    return 0;
}