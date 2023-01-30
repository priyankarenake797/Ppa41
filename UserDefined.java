import java.util.*;


class AgeInvalidException  extends Exception
{
    AgeInvalidException(String str)
    {
       super(str);
    }

}


class UserDefined
{
  public static void main(String arg[])
  {   
     Scanner sobj = new Scanner(System.in);
     System.out.println("Enter your age : ");
     int iAge = sobj.nextInt();

      try
      {
        if(iAge < 15)
         {
//khalachya line varach 1ch statement  .....> throw new AgeInvalidException("Your age is leass than 15");  1 line statement
        
         AgeInvalidException aobj = new AgeInvalidException("Your age is leass than 15");
        
         throw aobj;
         
         }
         else
         {
          
         System.out.println("Age is valid");
         }
       }
      catch(AgeInvalidException obj)
       {
       System.out.println(obj);
       }
   }
}
  
