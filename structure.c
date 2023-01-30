#include<stdio.h>


 // structure declaration
  
struct Demo
{
   int i;
  float f;           //...eg. mix meethai box
  int j;
  double d;
};



 int main()  // alwase write int because it good programming
{
    //structure object / variable creation
   // Memory gets allocated at this point

     struct Demo obj1; 
     
     struct Demo obj2; 
     
     struct Demo obj3; 

   // Member initialisation

      obj1.d=11.0;
      obj2.i=21;
      obj3.j=51;

   printf("size of obj is: %d\n",sizeof(obj1));
   printf("size of obj is: %d\n",sizeof(obj2));
   printf("i of obj2 is: %d\n",obj2.i);
   return 0;

}


// not allowed
     /*
        struct Demo
        {
          int i = 11;
          char ch ='A';
       
  }*/



