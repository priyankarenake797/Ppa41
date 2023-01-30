import java.util.*;   // java.util ya package madhe collection framework ahe sagal
 
 


class Collections5
{
    public static void main(String arg[])
    {
      ArrayList <Float> aobj = new ArrayList<Float>();
     
     aobj.Add(10.6f);
     
     aobj.Add(20.6f);
    
     aobj.Add(30.6f);
     
     aobj.Add(40.6f);
    
     aobj.Add(50.6f);

     Iterator iobj = aobj.iterator();
      while(iobj.hasNext())
      {
       System.out.println(iobj.next());

      }

     aobj.clear();
    }


}