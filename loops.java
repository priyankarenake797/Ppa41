
/*    Always used for and while loop  but for-each loop used in only JAVA */


class Loops
{
   public static void main(String arg[])
   {
       int Arr[] = {10,20,30,40};
       int iCnt = 0;
      
       System.out.println("Traversal of array using for loop:");
    
   for(iCnt = 0; iCnt < Arr.length; iCnt++)  //for loop same in c,c++ ,JAVA........not(Arr.length) 
        {
         System.out.println(Arr[iCnt]);
         }

        System.out.println("Traversal of array using while loop:");
        iCnt = 0;
   while(iCnt < Arr.length)                //same while loop prototype in c,c++ ,JAVA not(Arr.length)
       {
     
          System.out.println(Arr[iCnt]);
          iCnt++;
       }

          System.out.println("Traversal of array using do while loop:");
     
          iCnt = 0;
     
    do
      {
     
          System.out.println(Arr[iCnt]);
          iCnt++;
   
      } while(iCnt < Arr.length);      //same  do while loop prototype in c,c++ ,JAVA...not( Arr.length) 
    


      System.out.println("Traversal of array using For-each loop:");  //for-each loop
   for(int iNo : Arr)   // : ha for each cha syntax ahe...drawback jast controll karu shakat nahi(sagala data access karayacha asel tar)
        {    
          System.out.println(iNo);
        }
       

 }   

}