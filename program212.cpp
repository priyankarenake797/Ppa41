#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL       // in Buisness code used like this classs    // just declaration yachya definition baher(outside la) yener
{
   public:
        // Characteristics
      PNODE First;  // 8 byte

    
      //Behaviours
      SinglyLL();

      void InsertFirst(int no);
      void InsertLast(int no);
      void InsertAtPosition(int no,int ipos);
 
      void DeleteFirst(int);
      void DeleteLast(int);
      void DeleteAtPosition(int ipos);

     void Display();
     void Count();

};

int main()
{
    SinglyLL obj;

  return 0;
}