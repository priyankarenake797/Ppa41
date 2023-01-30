import java.io.*;

class WriteFile
{
   public static void main(String arg[])throws Exception
   {
     FileOutputStream fobj = new FileOutputStream("Marvellous.txt");  //"Demo.txt"
     
     String Data ="Marvellous Infosystems Pune";

     byte bdata[] = Data.getBytes();  // getBytes method string la array of byte madhe conver karava lagato  

      fobj.write(bdata);

      fobj.close();  //object close honar mhanje automatically file close...
 
   }



}