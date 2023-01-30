import java.util.*;

class MarvellousX
{
   public int CapCount(String s)
   {
       int iCnt = 0;

      for(int i =0 ;i < s.length(); i++)
          {
              if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
               {
                 iCnt++;
                }
            }
           return iCnt;
   }

}
class Program272
{
    public static void main(String ar[])
     {
        Scanner sobj = new Scanner(System.in);
       
       System.out.println("please string : ");
   
      String str = sobj.nextLine();

      MarvellousX obj = new MarvellousX();
        int iRet = obj.CapCount(str);
  
        System.out.println("Number of Capital letters are :"+iRet);
        
     }
}