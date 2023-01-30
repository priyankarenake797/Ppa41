#include<iostream>
using namespace std;


int main()
{

   int no = 11;
    
   int &x = no;  // x is referencr which is integer initialized with no
 
   int *p = &no;   // p is a pointer which holds is address of integer is currently initialized 

    double d = 90.0;

    double &y = d;
    double &z = d;

      int &a = x;


      return 0;
}