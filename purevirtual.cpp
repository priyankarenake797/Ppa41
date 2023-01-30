#include<iostream>
using namespace std;
  
class Circle
{
   public:                      // Accesss specifier
       float PI;                //Characteristics
       float Radius;


    Circle()                     // Default constructor
     {
       PI = 3.14;
       Radius = 0.0;

     
     }

    Circle(float A, float B)    //Parameterised constructor
     {
       PI = A;
       Radius = B;
     }     


    void Display()    //concreate method means function with body  //`1000
    {
      cout<<"Value of radius is : "<<Radius<<"\n";
    }


    virtual float Area() = 0;       // abstract method
    virtual float Circumfarance() = 0; //abstract method
};


class Marvellous : public Circle     //Drived class marvellous 
{
   public:
    
     Marvellous() : Circle()
     {
     }

     Marvellous(float x, float y) : Circle(x , y)
      {

      } 
     float Area()   //concreate method    //2000
      {
         float Ans = PI * Radius *Radius;
          return Ans;
      }
     float Circumfarance() //concreate method   //  3000
       {
      float Ans = 0.0;
      Ans = 2 * PI * Radius;
      return Anss;
       }

};


int main()
{

   Marvellous mobj1;
   
   Marvellous mobj2(3.14,10.89);

   float fret = 0.0;
   
   fret = mobj2.Area();         //output
   cout<<"Area is :"<<fret<<"\n";   //372.379
   
   fret = mobj2.Circumfarance();   //68.3892
   cout<<"Circumfarance is :"<<fret<<"\n";   
   

      return 0;
}