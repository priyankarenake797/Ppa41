
//in structure used linked list,pointer,self referential structure

#include<stdio.h>
  
  struct Demo
{
     int no;
     struct Demo *next;
};
   
  int main()
  {
     struct Demo obj1;
     struct Demo obj2;
     struct Demo obj3;

    obj1.no=11;
    obj1.no=21;
    obj1.no=51;
    

  obj1.next = &obj2;
  obj2.next = &obj3;
  obj3.next = NULL;


  return 0;


}


// oje1.no    11
//obj2.next    200
//obj1.next->no  21
//obj1.next->next->no   51
