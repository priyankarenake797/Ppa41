#include<iostream>
using namespace std;

// call by reference

void Swapi(int &x, int &y)
{
   int temp;

   temp = x;
        x  = y;
      y   = temp;

}

void Swapd(double &x, double &y)
{
   double temp;

   temp = x;
        x  = y;
      y   = temp;

}


int main()
{
   int a = 11 , b = 10;   

   cout<<"Value of a "<<a<<"\n";
   cout<<"Value of b "<<a<<"\n";

  Swapi(a,b);

  cout<<"Value of a "<<a<<"\n";
  cout<<"Value of b "<<b<<"\n";
   
    double m = 11.9 , n = 10.7
  cout<<"Value of m "<<m<<"\n";
   cout<<"Value of n "<<n<<"\n";

  Swapd(m,n);

  cout<<"Value of m"<<m<<"\n";
  cout<<"Value of n "<<n<<"\n";
   return 0;
}