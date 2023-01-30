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
{
   //step1 : allocate memory for node
   PNODE newn = new NODE;

  //Step2 : initialized node

   newn->data = no;
   newn->next = NULL;

 //step3 : cheked LL is empty or not
   if(First == NULL)    //  if(iCount == 0)
   {
      First = newn;
      iCount++;
   }
   else  // if LL contains atleast one node
  {
     newn->next=First;

     First = newn;
    iCount++;   


  }

}

void SinglyLL :: InsertLast(int no)
{
  PNODE newn = new NODE;

   newn->data = no;
   newn->next = NULL;

   if(First == NULL)
   {
      First = newn;
      iCount++;
   }
   else
  {
  
   

  }

}
void SinglyLL :: InsertAtPosition(int no , int ipos)
{}
 
void SinglyLL :: DeleteFirst(int)
{}
void SinglyLL :: DeleteLast(int)
{}
void SinglyLL :: DeleteAtPosition(int ipos)
{}

void SinglyLL ::Display()
{
    cout<<"elements of  linked list are :"<<"\n";
    PNODE temp = First;

    while(temp != NULL)
     {
          cout<<"| "<<temp->data<<" |->";
          temp = temp->next;
     }
   cout<<"NULL"<<"\n";
}
     
int main()
{
    SinglyLL obj1;
    SinglyLL obj2;

  cout<<sizeof(obj1)<<"\n";
  cout<<"First pointer contains : "<<obj1.First<<"\n";
  cout<<"Number of nodes are :"<<obj1.iCount<<"\n";

   obj1.InsertFirst(51);
   obj1.InsertFirst(21);
   obj1.InsertFirst(11);
 
   obj1.Display();
 cout<<"Number of nodes are :"<<obj1.iCount<<"\n";

//////////////////////////////////////////////////////////////////////////////////////

   obj2.InsertFirst(1001);
   obj2.InsertFirst(510);
   obj2.InsertFirst(210);
   obj2.InsertFirst(110);
 
   obj2.Display();
   cout<<"Number of nodes are :"<<obj2.iCount<<"\n";

  return 0;
}