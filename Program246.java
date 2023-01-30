import java.util.*;

class Program246
{
    public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);
      
       int iNo1 =0,iNo2 = 0 ,iAns =0;

     System.out.println("Enter first number : ");   // like printf
     iNo1 = sobj.nextInt();                                // like scanf

    System.out.println("Enter Scond number : ");
     iNo2 = sobj.nextInt();

   iAns = iNo1 + iNo2;

   System.out.println("Addition is :" +iAns);

   }

}