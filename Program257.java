import java.util.*;

class Digits
{  
  public boolean CheckArmstrong(int iNo)
     {
        int iDigitCount = 0;
        int iTemp =iNo;
         int  iPower = 1, iCnt =0 , iSum =0 , iDigit = 0;
          while(iTemp != 0)    // to calculate nu,mber of digit
             {
                iDigitCount++;
                iTemp = iTemp /10; 
             }
           iTemp = iNo;

          while(iTemp != 0)
          {
             iDigit = iTemp % 10;
              for(iCnt = 1; iCnt <= iDigitCount; iCnt++)  // logic to calculate powe
                {
                   iPower = iPower * iDigit;
                   }
             iSum = iSum + iPower;
                iPower = 1;          // **********

             iTemp = iTemp / 10;
           }
         if(iSum == iNo)
          {
             return true;
          }
         else
         {
             return false;
         }
     }
}


class Program257
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);

      System.out.println("Please enter  number : ");
      int iNo = sobj.nextInt();

       Digits dobj = new Digits();

     boolean  dRet= dobj.CheckArmstrong(iNo);
       if(dRet == true)
       {
             System.out.println("Number is armstrong"+dRet);
       }
      else
       {
            System.out.println("Number is not armstrong"+dRet);
       }

     }
}