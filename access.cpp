#include<iostream>
using namespace std;

class Base
{   
   // int X ......>it is internally consider as private because there not display any access specifier
    public :
          int i;
    private:
          int j;
    protected:
          int k;
    public:
       Base()
         {
           i=10;
           j=20;
           k=30;
         }

      void fun()
      {
        cout<<"Value of public i :"<<i<<"\n";        //allowed
        cout<<"Value of private j :"<<j<<"\n";       //allowed
        cout<<"Value of protected k :"<<k<<"\n";     //allowed
      }
};

int main()
{    
     Base bobj;
     cout<<"Value of public i :"<<bobj.i<<"\n";       //allowed
    // cout<<"Value of private j :"<<bobj.j<<"\n";    //not allowed
     //cout<<"Value of protected k:"<<bobj.k<<"\n";   //not alloweds

     bobj.fun();

   
       return 0;

}
  

C:\xampp\mysql\bin\mysqld.exe
C:\Program Files\Java\jdk-19\JAVA1\bin\server