import java.util.*;

class Pattern
{
   public void Display(String str)
     {
             char Arr[] =str.toCharArray();

               System.out.println("Length is :"+Arr.length);
      }  
       
}

class DemoA268
{
  public static void main(String a[])
     {
       Pattern pobj = new Pattern();
       Scanner sobj = new Scanner(System.in);
     
       System.out.println("Enter string : ");
      String s = sobj.nextLine();
     
      pobj.Display(s);             

     }
}


