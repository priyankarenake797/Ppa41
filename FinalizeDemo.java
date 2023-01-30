///////////////////////GARBAGE COLLECTOR////////finalize method is used for destructor

class Demo
{
    int Size;
    int Arr[];
   
   public Demo(int No)
   {  
      System.out.println("inside constructor ");
      Size = No;
      Arr = new int[Size];
   }

   protected void finalize()
      {
        System.out.println("inside finalize method");
        Arr = null;    // khaun zale ata dish uchala.ass    =null;
      }

}

class FinalizeDemo
{
    public static void main(String s[])
    {
       Demo obj = new Demo(4);
       obj = null;
       System.gc();   //muddamun garbage collector(gc) la bolaval ya staement mul...System he class/reference/final class

    }

}