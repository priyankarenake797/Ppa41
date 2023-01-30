#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)  //to avoid memory wastage  for use
struct node
{ 
   int data;
  struct node *next;
  struct node *prev;
};

typedef struct node NODE; 
typedef struct node * PNODE; 
typedef struct node ** PPNODE; 

void InsertFirst(PPNODE First ,PPNODE Last,int no)
{
   PNODE newn =(PNODE)malloc(sizeof(node));

   newn->data = no;
   newn->next = NULL;
  newn->prev = NULL;

     if((*First == NULL) && (*Last == NULL))  //LL is empty
      {
          *First = newn;
          *Last = newn;
       }
      else    //It contains one or more nodes
        {
           newn->next=*First;
          (*First)->prev = newn;
          *First = newn;
         
        }
       
       (*First)->prev=*Last;
       (*Last)->next=*First;

}

void InsertLast(PPNODE First ,PPNODE Last,int no)
{
   PNODE newn =(PNODE)malloc(sizeof(node));

   newn->data = no;
   newn->next = NULL;
  newn->prev = NULL;

     if((*First == NULL) && (*Last == NULL))  //LL is empty
      {
          *First = newn;
          *Last = newn;
       }
      else    //It contains one or more nodes
        {
         (*Last) -> next = newn;
          newn -> prev = *Last;
          *Last = newn;
        }

        (*First)->prev=*Last;
        (*Last)->next=*First;
}



int main()
{
   PNODE Head = NULL;
   PNODE Tail   = NULL;

   return 0;
}