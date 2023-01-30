import java.util.*;   // java.util ya package madhe collection framework ahe sagal
 
 


class Collections7
{
    public static void main(String arg[])
    {
      Stack <Character>sobj = new Stack<Character>();

      sobj.push('a'); 
      sobj.push('b'); 
      sobj.push('c'); 
      sobj.push('d'); 
      sobj.push('e'); 
    System.out.println("Elements of stack :"+sobj);

    System.out.println("pop element is :"+sobj.pop());

   
    System.out.println("Elements of stack :"+sobj);

    }
}