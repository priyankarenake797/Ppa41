
import java.util.*;

class ExceptionDemoSolution
{
   public static void main(String a[])
   {
     Scanner sobj = new Scanner(System.in);

     int iNo1 = 0, iNo2 = 0, iAns = 0;

     System.out.println("Enter the first number");
      iNo1 = sobj.nextInt();

    System.out.println("Enter the second number");
      iNo2 = sobj.nextInt();
   
      try
    {
       
       System.out.println("Inside try block");
       iAns = iNo1 / iNo2;
       
    }

     catch(ArithmeticException obj)  //Reference ahe ha Obj
      {

       System.out.println("Inside catch1");
 
        System.out.println(obj);
 
      }
   
    catch(NullPointerException obj)  //Reference ahe ha Obj
      {
        System.out.println("Inside catch 2");
 
        System.out.println(obj);
 
 
      }
   catch(Exception obj)   //Reference ahe ha Obj
      {
         System.out.println("Inside catch 3");
 
        System.out.println(obj);
      }
     finally
      {
    System.out.println("Inside Finally bolck");
 
        sobj.close();
      }
    System.out.println("Division is :"+iAns);
   }


}