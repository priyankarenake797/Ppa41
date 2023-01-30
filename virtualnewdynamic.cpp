#include<iostream>
using namespace std;

class Base
{
     public:
        int A,B;
 void fun()                  //1000
    {   
       cout<<"Base fun\n"; 
    } 
     
  virtual void gun()        //2000
    {   
       cout<<"Base gun\n"; 
    } 

        
   virtual  void sun()    //3000
    {   
       cout<<"Base sun\n"; 
    } 

    virtual  void run()   //4000
    {   
       cout<<"Base run\n"; 
    } 
};

class Derived : public Base
{  
   public:
    int X,Y;

   
      void gun()           //5000   base madhe gun() ahe te pan vitual tyamule ithe fakt virtual n lihata gun() declare kel
    {   
       cout<<"Derived  gun...\n"; 
    } 
   
   
   virtual void run()         //6000
    {   
       cout<<"Derived run\n"; 
    } 

  
  virtual void mun()        //7000
    {   
       cout<<"Derived mun\n"; 
    } 


};

int main()
{   
    

    Base *bp = new Derived;
     Derived dobj;
  
    bp = &  dobj;  // upcasting
     
    bp->fun();    //base fun   1000
    bp->gun();     //derived gun    (2000) jato 5000
    bp->sun();     //base sun       3000
    bp->run();    //derived run     (4000) jato    6000
    //bp->mun();   //error karan base madhe virtual ha shabd asel tarach te derived kade jail...ithe virtual mun base madhech nahi ani object
                 //ha base cha ahe      
   
   return 0;
}