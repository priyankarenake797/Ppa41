#include<stdio.h> 

 struct Demo
{
   int i;    //4
   float f;   //4
   double d;  //8


};  //16    


  union Hello
{
   int i;    //4
   float f;   //4
   double d;  //8
  char ch;    //1


}; //8

  int main()
 {
    struct Demo dobj;
     union Hello hobj;

      printf("Size of the structure is :%d\n",sizeof(dobj));

      
      printf("Size of the union is :%d\n",sizeof(hobj));
  
    return 0;
 }