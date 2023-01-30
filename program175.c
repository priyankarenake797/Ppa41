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
  PNODE temp = *First;
  newn->data = no;
  newn->next = NULL;
 
  if(*First == NULL)   // if linked list is empty
     {
       *First = newn;
     }
    else                //if linked list contains atlest one node
     {
      while(temp->next != NULL)
         {
           temp = temp->next;

         }
        temp->next=newn;
       
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

int Count(PNODE First)
{
    int iCnt = 0;

   while(First != NULL )
   {
     iCnt++;
    First = First -> next;     
    }
 return iCnt;

}

void DeleteFirst(PPNODE First)
{

   PNODE temp = *First;

  if(*First == NULL) // Empty LL.......A
   {
     return;
   }
  else if((*First) -> next == NULL)  //1 node in LL.........B
   {
      free(*First);
      *First = NULL;
   }
  else                 // More than 1 node in LL..............c
  {
   (*First) = (*First) -> next;
    free(temp);
  }

}

void DeleteLast(PPNODE First)
{
   PNODE temp =*First;
  if(*First == NULL) // Empty LL
   {
     return;
   }
  else if((*First) -> next == NULL)  //1 node in LL
   {
      free(*First);
      *First = NULL;
   }
  else // More than 1 node in LL
  {
    while(temp -> next -> next != NULL)
    {
      temp = temp -> next;
    }
    free(temp -> next);
    temp -> next = NULL;   

  }

}

void InsertAtPos(PPNODE First,int no,int ipos)
{
   
   int NodeCnt = 0 , iCnt = 0;
   PNODE newn = NULL;
   PNODE temp = NULL;
   NodeCnt =  Count(*First);

    if((ipos < 1) || (ipos > (NodeCnt + 1)))  // like filter 
     {
       printf("Invalid position\n");
       return;
     }

    if(ipos == 1)
    {
      InsertFirst(First,no);
    }

    else if(ipos == NodeCnt+1)
    {
      InsertLast(First,no);
    }

    else
    {
      newn = (PNODE)malloc(sizeof(NODE));

      newn->data=no;
      newn->next = NULL;
   
       temp = *First;
      
      for(iCnt = 1; iCnt < ipos -1 ;iCnt++)
       {
         temp = temp -> next;
       
       }
        newn->next = temp->next;
         temp->next=newn;
    }
 
}
void DeleteAtPos(PPNODE First, int ipos)
{
      
  
  PNODE temp1 = NULL;
  PNODE temp2 = NULL;

  int iCnt =  0,NodeCnt = 0;

  NodeCnt = Count(*First);

    if((ipos < 1) || (ipos > NodeCnt))  // like filter 
     {
       printf("Invalid position\n");
       return;
     }

    if(ipos == 1)
    {
      DeleteFirst(First);
    }

    else if(ipos == NodeCnt)
    {
      DeleteLast(First);
    }

    else
     {
      
      
       temp1 = *First;
       
      for(iCnt = 1; iCnt < ipos -1 ;iCnt++)
       {
         temp1 = temp1 -> next;
        }

       temp2 = temp1 -> next;

       temp1->next = temp2->next;  
       
     
       
        free(temp2);
     }

}


int main()
{
   //struct node * Head = NULL; // creating pointer 8 byte memory
 
     PNODE  Head = NULL;
     int iRet= 0;
    InsertFirst(&Head,51);  //InsertFirst(60,51)
    InsertFirst(&Head,21);  //InsertFirst(60,21)
    InsertFirst(&Head,11);  //InsertFirst(60,11)
     Display(Head);
 
    iRet = Count(Head);
    printf("Number of nodes :%d",iRet);
     
   InsertAtPos(&Head,105,5);
     Display(Head);
     
    InsertLast(&Head,101);  
    InsertLast(&Head,111);
     
     Display(Head);
   
   iRet = Count(Head);
    printf("Number of nodes :%d",iRet);

  return 0;
}


