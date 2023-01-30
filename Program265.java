
     

import java.util.*;

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
     {
        Arr = new int[iSize];
     }
    protected void Accept()
     {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter"+Arr.length+"elements");
  
        for(int iCnt = 0; iCnt < Arr.length ; iCnt++)
         {
           System.out.println("Enter the element no : "+ (iCnt +1));
            Arr[iCnt] = sobj.nextInt();
         }
     }

    protected void Display()
     {
       System.out.println("Elements of array are :");

         for(int iCnt = 0; iCnt < Arr.length ; iCnt++)
           {
               System.out.println(Arr[iCnt]+"\t");
           }
        System.out.println();
     }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
     {
       super(iSize);
     }
  
   public void Revers()
    {
      int iStart = 0;
      int iEnd = Arr.length-1;
      int iTemp = 0;

      while(iStart < iEnd)
       {
         iTemp = Arr[iStart];
         Arr[iStart] = Arr[iEnd];
         Arr[iEnd] = iTemp;

       iStart++;
       iEnd--;

       }
    }
}

class Program265
{
   public static void main(String ar[])
   {
      Scanner sobj = new Scanner(System.in);
    
     System.out.println("Enter the size of array that u want to create");

      int iSize = sobj.nextInt();

    MarvellousX obj = new MarvellousX(iSize);
     obj.Accept();
     obj.Display();  
      obj.Revers();  
    System.out.println("Array after reverse operation : "); 
      obj.Display(); 


   /// repeat revers function call aplya la  parat saral array milel

        // obj.Revers();  
       //System.out.println("Array after reverse operstion : "); 
       // obj.Display(); 

   }

}