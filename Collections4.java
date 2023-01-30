import java.util.*;   // java.util ya package madhe collection framework ahe sagal
 
 
class Book
{
   public String Name; 
   public int Prize;

   public Book(String s,int i)
    {
     this.Name = s;
     this.Prize = i;
    }

  public void Display()
  {
    System.out.println("Book Name :"+this.Name+"Prize :"+this.Prize);
   }

}


class Collections3
{
    public static void main(String arg[])
    {

     LinkedList <Book>lobj = new LinkedList<Book>();

      lobj.add(new Book("Let us",400));
      lobj.add(new Book("Data s ",500));
      lobj.add(new Book("c++",980));
      lobj.add(new Book("angular book",790));

     Iterator iobj = lobj.iterator();
      Book bref =null;
      System.out.println("Elements of linked list are :");
      while(iobj.hasNext())
       {
         bref = (Book)iobj.next();
         bref.Display();
        }
      lobj.clear();
    }


}