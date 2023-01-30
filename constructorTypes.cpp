#include<iostream>
using namespace std;
 
class Demo
{
  public:
    int i,j;
    Demo()
     {
       i=0;
       j=0;
     }
    
    
    Demo(int a, int b)
     {
       i=a;
       j=b;
     }
   
    Demo(Demo &ref)   //copy constructor
     {
      i = ref.i;
      j = ref.j;
     }

};


int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);     //example.....obj2 chi zerox kadhali call jail copy construcer kade


    cout<<obj1.i<<"\t"<<obj1.j<<"\n";  // 0  0
    cout<<obj2.i<<"\t"<<obj2.j<<"\n";  // 11  21
    cout<<obj3.i<<"\t"<<obj3.j<<"\n";  //11  21

  return 0;
}