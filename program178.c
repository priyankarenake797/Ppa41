
// Doubly Linear linked list

#include<stdio.h>
#include<stdlib.h>

#pragma pck(1)
struct node
{
  int data;
  struct node *next;
  struct node *prev;   //  X extra add
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
 PNODE newn = (PNODE)malloc(sizeof(NODE)); //1 Allocate dynamic memory  12 byte node

  newn->data = no;
  newn->next = NULL;
  newn->prev = NULL;  //X
  
    if(*First == NULL)
    {
      *First = newn;
    }
    else
    {
       newn->next=*First;
 
       (*First)->prev = newn; //X

       *First = newn;
    }




}

void InsertLast(PPNODE First, int no)
{
 PNODE newn = (PNODE)malloc(sizeof(NODE)); //1 Allocate dynamic memory  12 byte node

  newn->data = no;
  newn->next = NULL;
  newn->prev = NULL;  //X
  
    if(*First == NULL)
    {
      *First = newn;
    }
    else
    {
       //Logic is next program
    }
}

int main()
{
     PNODE Head = NULL;

  return 0;
}