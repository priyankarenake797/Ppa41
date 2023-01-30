#include<iostream>
using namespace std;

namespace Marvellous
{
   class Demo
    {
       public:
           int i,j;
           void fun()
           { 
           cout<<"Inside fun of Demo from Marvellous\n";
           }


    };
  
   class Hello
    {
      public:
        int x,y;
    };

} //ithe ; nahiye karan namespace is not datatype...


namespace Infosystems
{
   Class Demo
     {
       public:
         int a,b;
       void fun()
         {
            cout<<"Inside fun of Demo from Infosystem\n";
         }          

     };


}    //ithe ; nahiye karan namespace is not datatype...


int main()
{
   Marvellous::Demo obj1;
     obj1.fun();
    
   
   Infosystems::Demo obj2;
     obj2.fun();


  return 0;
}