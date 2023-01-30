#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)  //padding mhnaje jaga west jau naye mhanun pragma pack(1) ek ek jaga
struct node   // just structure declaration
{
  int data;
  struct node *next;    // pointer its self
};

typedef struct node NODE;
typedef struct node * PNODE;  // 8 byte memory   // note * and ** asalya tary 8 byte memory ch asate..
typedef struct node ** PPNODE; //8 byte memory
                              
                              //shirta varcha number
void InsertFirst(PPNODE First, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE)); //1 Allocate dynamic memory

  newn->data = no;
  newn->next = NULL;

    if(*First == NULL)   // if linked list is empty
     {
       *First = newn;
     }
    else                //if linked list contains atlest one node
     {
       newn->next = *First;
        *First = newn;  
     }
}

void InsertLast(PPNODE First, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE)); //1 Allocate dynamic memory

  newn->data = no;
  newn->next = NULL;
 
  if(*First == NULL)   // if linked list is empty
     {
       *First = newn;
     }
    else                //if linked list contains atlest one node
     {
      newn->next = *First;
        *First = newn; 
     }

}

void Display(PNODE First)
{
   printf("Elements from the linked list are : \n");
  
   while(First != NULL)
    {
       printf("| %d |->",First->data);
       First = First -> next;
    }
  printf("NULL \n");
}

int main()
{
   //struct node * Head = NULL; // creating pointer 8 byte memory
 
     PNODE  Head = NULL;
    InsertFirst(&Head,51);  //InsertFirst(60,51)
    InsertFirst(&Head,21);  //InsertFirst(60,21)
    InsertFirst(&Head,11);  //InsertFirst(60,11)

    Display(Head);

    
  return 0;
}