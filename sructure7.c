#include<stdio.h>


#pragma pack(1)   // memory is save not waste by using this line  now ans is 14 byte  preproccesor ne compiler la sangital 1-1 byte de 1 /2/ 4 /8 /16 deu shakato hech 
                  // shakto

 struct Demo
{
   int i;   //4

   char ch1; //1  // compiler 4 byte dete
 
   float f; //4

   char ch; //1   // compiler 4 byte dete mhanun 20 byte.

   float d; //4


};    //14        //output is 20


  int main()
 {
    struct Demo dobj;

    printf("Size of the structure is :%d\n",sizeof(dobj));
  
    return 0;
 }