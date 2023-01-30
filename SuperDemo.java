
class Base
{
   public int A,B;
   public Base(int No1, int No2)
   {
     this.A = No1;
     this.B = No2;
   }
  public void fun()
   {
     System.out.println("Inside Base fun");
     System.out.println("Value of A from fun method is :"+this.A);  //this mhanje swatach display kara
     
   }

}

class Derived extends Base
{

  public int X,Y;
     
   public Derived(int No1, int No2 , int No3 ,int No4)
   {
     super(No3,No4); // 1 usecase....Base(51,101)

     this.X = No1;
     this.Y = No2;
   }
   public void gun()
   {
      System.out.println("Value of A from fun method is :"+super.A);   //dusaryach display kara (2 usecase)
       super.fun(); //3 usecase
   
   }
}

class SuperDemo
{
   public static void main(String a[])
   {
     Derived dobj = new Derived(11,21,51,101);
     
      dobj.fun();
      dobj.gun();
   }

}