#include<iostream>
using namespace std;

class Demo
{
   public:
     int i;
     int j;
     const int k;
     const int l;

    Demo() :k(11), l(21)                           //...Default condtructor
     {
        i = 51;
        j = 101;
      }
      
        
    //....parameterised constructor
    Demo(int a, int b, int c, int d): k(c),l(d)   //...contant k and l variable initialization type
     {
       i = a;
       j = b;
     }
};

int main()
{
    Demo obj1;
    Demo obj2(10,20,30,40);

    //obj1.k++;  Not Allowed
    //obj2.k++;  Not Allowed

    obj1.i++;
    obj2.i++;


   return 0;
}
