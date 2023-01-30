#include<iostream>
using namespace std;


class Demo
{
     public:
           int i;                  //non ststatic  4 byte     pratek object karata separate memory allocate hoin(instance variabe) (personal data mhanje seperate tat)

           int j;                  // non static    4 byte      pratek object karata separate memory allocate hoin(instance variable)

           static int k;                 // static   (class variables)  ( restuarent ch example lonch,kanda,limbu its common data), 
           static int l;                                 //static la memory hi static segment madhe milel data section cha  



    Demo()    // Default constructor

  {
    int i=0;
    int j=0;
  
  }
   
    Demo(int a, int b)            // parametrised constructor
  {
      i=a;
      j=b;

  }

    void fun()                    //instance method(user define function)
     {     // accses static ani non static karu shakat
       
      cout<<"Inside non static method fun\n";       

       cout<<"value of i"<<this->i<<"\n";
       cout<<"value of j"<<this->j<<"\n";



       
      cout<<"Value of k :"<<Demo::k<<"\n";       //0
      cout<<"Value of l :"<<Demo::l<<"\n";      //0


   
     }
    static void gun()              //class method static method karata *this pointer nasato
    {
  
       // only static access karu shakato

      cout<<"Inside static method gun\n";
     cout<<"Value of k :"<<Demo::k<<"\n";       //0
      cout<<"Value of l :"<<Demo::l<<"\n";      //0

    }






};

   // load time variables
    int Demo::k = 0;    //k is variable of a class which is integer with initialized o , it is not global initialization , ithe actually memory milate, it is concern with class 
     
     int Demo::l = 0; 

int main()
{
      cout<<"Inside main \n";
     cout<<"Value of k :"<<Demo::k<<"\n";       //0
      cout<<"Value of l :"<<Demo::l<<"\n";      //0

       Demo::gun(); 
   
     Demo obj1(10,11);  
     Demo obj2(20,21);  
     Demo obj3;
    
    cout<<"Value of obj1 :"<<obj1.i<<"\n";      //10
    
    cout<<"Value of obj1 :"<<obj2.i<<"\n";     //20

   
    cout<<"Value of obj1 :"<<obj1.j<<"\n";     //11
    
    cout<<"Value of obj1 :"<<obj2.j<<"\n";     //21


     obj1.fun();   //fun(obj1);
     obj2.fun();
     
     obj1.gun();   // Demo::gun()
          
    cout<<sizeof(obj1)<<"\n";      // 8 byte (only summation of non static characteristics) yannach memmory milate 
    cout<<sizeof(obj2)<<"\n"; 
       
    

       return 0;
}