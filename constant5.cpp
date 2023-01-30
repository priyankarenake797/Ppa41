

//full error in this program just follow for clear concepts

#include<iostream>
using namespace std;

class Demo
{   
   public:
     int i;
    const int j;
  
  // parametrised constructor with DEFAULT values
  Demo(int x = 10, int y = 20) : j(y)
   {
     i = x;
    
   }

  void fun()
  { 
    int a = 10;
    const int b = 20;   //constant variable
    i++;
    j++;
    a++;
    b++;
  }

  void gun() const     //function (behaviour) constant ahe .
  {
    int a = 10;
    const int b = 20;
   i++;
   j++;
   a++;
   b++;
  }

};

int main()
{
    Demo obj1(11,21);    // 11 21
    const Demo obj2(11,21);         //11 21  constant object
    
    obj1.fun();  
   
   
    return 0;
}