

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)  

struct node   // just structure declaration
{
  int data;
  struct node *next;    // pointer its self
};

typedef struct node NODE;
typedef struct node * PNODE;  // 8 byte memory   // note * and ** asalya tary 8 byte memory ch asate..
typedef struct node ** PPNODE; //8 byte memory
                              
 

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

void DisplayDigitsSum(PNODE First)
{
   int iSum = 0 , iDigit = 0 , iNo = 0;

    while(First != NULL)
   {
     while(iNo != 0)
    {
       iDigit = iNo % 10;
       iSum = iSum + iDigit;
       iNo = iNo / 10;

    }
      
       printf("Addition of digits of the number %d is %d \n",First->data,iSum);
        First = First->next;

   }
 
}

int main()
{
        PNODE  Head = NULL;
                  
        
         
         InsertLast(&Head,11);
         InsertLast(&Head,21);
         InsertLast(&Head,51);
         InsertLast(&Head,111);
         InsertLast(&Head,121);
         InsertLast(&Head,151);
  
        DisplayDigitsSum(Head);
      
       return 0;
}


