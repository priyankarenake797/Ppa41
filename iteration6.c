

 //do-while program

#include<stdio.h>
   
  int main()
{

  

   int icnt = 0;
  
     icnt = 1;  //1
         
       do      //2
          {

            printf("Jay Ganesh....\n");  // loop body actual logic   //4
         
            icnt++;     //3 
            }
            
      while(icnt < 6);                                  // loop madhe minimum ekda tari printf hotoch supose icnt<0  example tedybar fuga ';' must important 


   return 0;
}