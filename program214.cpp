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
      PNODE First;  // 8 byte    this is pointer
      int iCount;    // 4  byte    ......so object size is 12
    
      //Behaviours
      SinglyLL();

      void InsertFirst(int no);
      void InsertLast(int no);
      void InsertAtPosition(int no,int ipos);
 
      void DeleteFirst(int);
      void DeleteLast(int);
      void DeleteAtPosition(int ipos);

      void Display();
     

};

/*
Return_Value Class_Name :: Function_Name(Parameter)  ------->> // eg.  SinglyLL :: SinglyLL()  
{

}
*/

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{}

void SinglyLL :: InsertLast(int no)
{}
void SinglyLL :: InsertAtPosition(int no , int ipos)
{}
 
void SinglyLL :: DeleteFirst(int)
{}
void SinglyLL :: DeleteLast(int)
{}
void SinglyLL :: DeleteAtPosition(int ipos)
{}

void SinglyLL ::Display()
{}
     
int main()
{
    SinglyLL obj1;
    SinglyLL obj2;

  cout<<sizeof(obj1)<<"\n";
  cout<<"First pointer contains : "<<obj1.First<<"\n";
  cout<<"Number of nodes are :"<<obj1.iCount<<"\n";

  return 0;
}