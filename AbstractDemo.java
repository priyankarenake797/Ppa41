//abstract class is a class which contains 0 or more abstract method in it

abstract class Arithmatic
{
   public int Addition(int No1, int No2)
   {
    return No1 + No2;
   }   
    
  public abstract int Subtraction(int No1, int No2);
  
}

class Marvellous extends Arithmatic
{
  public int Subtraction(int No1, int No2)
  {
   
    return No1 - No2;

  }

}  


class AbstractDemo
{
   public static void main(String arr[])
   {
     Marvellous mobj = new  Marvellous();
     int Ret = 0;
     Ret = mobj.Addition(11,10);
    System.out.println("Addition is"+Ret);

    Ret = mobj.Subtraction(11,10);
    System.out.println("Subtraction is"+Ret);
   }

}