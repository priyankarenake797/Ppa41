
/*  this program is for constant for class object */


#include<iostream>
using namespace std;

class Demo
{
   public:
     int i;
     int j;
    Demo()
   {
     i = 11;
     j = 21;

   }

   Demo(int x , int y)
   {

       i = x;
       j = y;

   }
};

int main()
{
      Demo obj1;
      Demo obje2(10,20);
    
     const Demo obj3;
     const Demo obj4(10,20);
    
      obj1.i++; //allowed
      //  obj4.i++; //not allowed(because...constant)
      //  obj3.j++; //not allowed(because....constant)
      obj1.j++; //allowed
     cout<<sizeof(obj1)<<"\n";
   return 0;
}