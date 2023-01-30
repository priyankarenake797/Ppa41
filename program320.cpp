#include<iostream>
using namespace std;

template <class T>
struct node
{
     T data;
     struct node<T> *next;
};



template <class T>
class SinglyLL
{
   public:
     
     struct node<T> * First;

    SinglyLL();   
    void InsertFirst(T no);
    void Display();
    int Count();

};

template <class T>
SinglyLL<T> :: SinglyLL()
{
   First = NULL;
}

template <class T>
void SinglyLL <T> :: InsertFirst(T no)
{
   struct node<T> * newn = new node<T>;

   newn-> data = no;
   newn->next=NULL;

   
   if(First == NULL)
    {
       First = newn;
    }
  else
   {
      newn->next = First;
     First = newn;
   }
}

template <class T>
void SinglyLL <T> :: Display()
{
   struct node<T> * temp = First;
    
   while(temp != NULL)
    {
      cout<<temp->data<<" ";
      
      temp = temp->next;

   }
  cout<<"\n";

}
 
template <class T>   
int SinglyLL<T> :: Count()
{
  struct node<T> * temp = First;
   int iCnt = 0;
    
   while(temp != NULL)
    {
        iCnt++;

      temp = temp->next;

   }
  return iCnt;
}

int main()
{    
     int iRet = 0; 
   
    SinglyLL <char>cobj;
    cobj.InsertFirst('b');
    cobj.InsertFirst('a');
   
     cobj.Display();
   iRet = cobj.Count();
  cout<<"Number of are :"<<iRet<<"\n";


  SinglyLL <int>obj;
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
     obj.Display();
   iRet = obj.Count();
  cout<<"Number of are :"<<iRet<<"\n";


   SinglyLL <float>fobj;
    fobj.InsertFirst(21.1);
    fobj.InsertFirst(2.51);
    fobj.InsertFirst(2.21);
    fobj.InsertFirst(1.11);
     fobj.Display();
   iRet = fobj.Count();
  cout<<"Number of are :"<<iRet<<"\n";

  SinglyLL <double>dobj;
    dobj.InsertFirst(101);
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
     dobj.Display();
  iRet = dobj.Count();
  cout<<"Number of are :"<<iRet<<"\n";




  return 0;
}