
///                 program176.c varun program edit kelay


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool CheckPerfect(int iNo)
{
    int iSum = 0 , iCnt = 0;
    int iTemp = iNo;

     for(iCnt = 1; iCnt <=(iNo/2) ; iCnt++)
      {
         if(iNo % iCnt == 0)
          {
             iCnt = iSum + iCnt;
          }
        return (iSum == iTemp);
      }
}

void DisplayPerfect(PNODE First)
{
   while(First != NULL)
   {
      if(CheckPerfect(First->data) == true)
       {
         printf("%d is a perfect number\n ",First->data);
       }
      First = First -> next;
   }

}
    
int main()
{
        PNODE  Head = NULL;
                  
         InsertLast(&Head,11);
         InsertLast(&Head,28);
         InsertLast(&Head,51);
         InsertLast(&Head,496);
         InsertLast(&Head,121);
         InsertLast(&Head,8128);
  
         DisplayPerfect(Head);
      
       return 0;
}


