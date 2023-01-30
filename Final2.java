
class Base
{
   public void fun()
   {
     System.out.println("Base fun constructor");
   } 
   public final void gun()
   {
     System.out.println("Base gun constructor");
   }
}
  

class Derived
{
  public void fun()
   {
   
    System.out.println("Derived fun constructor");
 
   }
  public void gun()
   {
    System.out.println("Derived gun constructor");
   }


}

class Final2
{
   public static void main(String arr[])
    {
     Base bobj = new Derived();
          bobj.gun();
    }
}