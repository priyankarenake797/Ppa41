#include<iostream>
using namespace std;

template<class T>

void Swap(T &x, T &y)
{
   T temp;

   temp = x;
        x  = y;
      y   = temp;

}



int main()
{
   int a = 11 , b = 10;   

   cout<<"Value of a "<<a<<"\n";
   cout<<"Value of b "<<a<<"\n";

  Swap(a,b);

  cout<<"Value of a "<<a<<"\n";
  cout<<"Value of b "<<b<<"\n";
   
    double m = 11.9 , n = 10.7;
  cout<<"Value of m "<<m<<"\n";
   cout<<"Value of n "<<n<<"\n";

  Swap(m,n);

  cout<<"Value of m "<<m<<"\n";
  cout<<"Value of n"<<n<<"\n";
   return 0;
}