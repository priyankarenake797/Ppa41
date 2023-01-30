#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node   
{ 
   int data;
   struct node *next;
};


typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int No) //Head jyala point karyto ie. PPNODE
{

    

 //step 1 : Allocate the memmory for new node

 PNODE newn = (PNODE)malloc(sizeof(NODE));

 //step 2 : Initialise the node

 newn->data = No;
 newn->next = NULL;

 // step 3 : Checked linked list is empty or not
  if(*First == NULL)
   {
       *First = newn;
   }
   else
   {
     newn->next = *First;
       *First =newn;
   }
 
}

void Display(PNODE First)
{
  printf("Elements of lili are : \n");
   while(First != NULL)
    {
      printf("%d\t",First->data);
      First = First->next;
    }
  printf("\n");
}

int main()
{
  PNODE Head = NULL;

   InsertFirst(&Head,51);
   InsertFirst(&Head,21);
   InsertFirst(&Head,11);
  
    Display(Head);
   
   return 0;
}