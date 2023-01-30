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

}

void Display(PNODE First)  
{


}

int main()
{
  PNODE Head = NULL;

   InsertFirst(&Head,51);
   InsertFirst(&Head,21);
   InsertFirst(&Head,11);
  
    Display(Head);
   
   return 0;
}s