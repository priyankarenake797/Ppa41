#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node 
{
  int Data;
  node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
 {
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn -> next = NULL;
    newn ->Data = no;
  
     if(*Head == NULL)
      {
        *Head = newn;
      }
     else
      {
        newn -> Next = *Head;
        *Head = newn;
      }
  }
int SearchFirstOcc(PNODE Head , int no)
{


}

int main()
 {
   PNODE First = NULL;

  InsertFirst(&First,10);
  InsertFirst(&First,20);
  InsertFirst(&First,30);
  InsertFirst(&First,40);
  InsertFirst(&First,50);
  InsertFirst(&First,30);
  InsertFirst(&First,70);
  return 0;
 }