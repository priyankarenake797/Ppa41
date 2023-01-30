import java.utill.*;

class Input
{
  public static void main(String arg[])
  {
   scanner sobj = new Scanner(System.in);
    int iNo1 = 0, iNo2 = 0;
    int iAns = 0;

    System.out.println("Enter the first number : ");
    iNo1 = sobj.nextInt();

    System.out.println("Enter the second number : ");
    iNo2 = sobj.nextInt();

    iAns = iNo1 + iNo2;

   System.out.println("Addition is :"+iAns);
    

  }

}

/*
----------------------------
Method of Scanner class
----------------------------
Data type    Method
----------------------------     
boolean     nextBoll()
byte        nextByte() 
char        nexLine()  //String
int         nextInt()
float       nextFloat()
double      nextDouble()
short       nextShort()
long        nextLong()
----------------------------
*/





