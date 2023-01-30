import java.util.*;   // java.util ya package madhe collection framework ahe sagal

class Collections2
{
    public static void main(String arg[])
    {
        LinkedList <String>lobj = new LinkedList<String>();

        lobj.add("Kapil");
        lobj.add("Aditya");
        lobj.add("Rohan");
        lobj.add("Rutik");
        lobj.add("Tejas");
      
      System.out.println("Elements of linked list are"+lobj);
    
        lobj.addFirst("Pooja");
        System.out.println("Elements of linked list 1st are"+lobj);

        lobj.addLast("Sneha");
        System.out.println("Elements of linked list last are"+lobj);

       //class name   =      method name();
        Iterator iobj = lobj.iterator();
        System.out.println("Data using iterator is :");
          while(iobj.hasNext())   // ahe ka koni clinic eg.
          {
            System.out.println(iobj.next());  //pathav aat..clinic eg.s
          }

          if(lobj.contains("Rohan"))
          {
            System.out.println("121 is present in LL");
          }
          else
           {

            System.out.println("121 is not present in LL");
           }

        lobj.remove();
        System.out.println("Elements of linked list in between are"+lobj);

        lobj.remove(0);
        System.out.println("Elements of linked list in between are"+lobj);
    
        lobj.removeLast();
        System.out.println("Elements of linked list in between are"+lobj);

        System.out.println("number of elements are "+lobj.size());

        lobj.set(1,"Deepak");
        System.out.println("Elements of linked list in are"+lobj);

      lobj.clear();
    System.out.println("Elements of linked list in between are"+lobj);


    }


}