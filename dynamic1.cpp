#include<iostream>
using namespace std;

  int main()
{
     int *p = NULL;
    

   p = new int [10];    // exactly use in c++ and JAVA

         // p = (int *)malloc(10 * sizeof(int)); internally work like that 
       	// use the memory
  


    delete p;       // free(p)   

    return 0;

}



int *p = NULL;
 