#include<iostream>
using namespace std;

class Base
{
   public:                  	//access specifier
     int A,B;

    void fun()			//function defination  //1000
     {  
        cout<<"Base fun \n";
      }

    void gun(int i)		//function defination  //2000 
     {  
        cout<<"Base gun with one integer \n";
      }
    
     void gun(int i, int j)    //Overloaded function defination  //3000
     {  
        cout<<"Base gun with two integer \n";
      }
    
};
 
class Derived : public Base
{
     public:
      int X,Y;
      
    void sun()                              //function defination   //4000
    {
        cout<<"derived sun\n";			
    }

    void fun()					//function redefination  //5000
    {
      cout<<"derived fun\n";
    }
};

int main()
{      Base bobj;  
       bobj.fun();       // 1000
      Derived dobj;
      dobj.fun();         //CALL 5000     //derived class cha object create  kela mhanun derived ch function call 
      dobj.gun(11);       //CALL  2000
      dobj.gun(11,21);    //CALL  3000		
      dobj.sun();         //CALL  4000


 return 0;
}


//function overded in the same function
//redefination across and across related class(immegiate derived class)