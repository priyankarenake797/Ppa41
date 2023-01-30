import java.sql.*;  //1

class Database
{
  public static void main(String arg[]) throws Exception
  {
  
  
  String URL = "jdbc:mysql://localhost:3306/ppa41";
  String Username = "root";
  String Password = "root";
  String Query = "Select * from student";

   //class                //class  //method name
  Connection cobj = DriverManager.getConnection(URL,Username,Password);  //2

 Statement sobj = cobj.createStatement();   //3  kaggad lihayala
                        //methods
 ResultSet robj = sobj.executeQuery(Query);  //4
            //method
  while(robj.next()) //5  hi method true return value dete joparyant data yetoy data band it false
   {
    System.out.println("RID : "+robj.getInt("RID"));
    System.out.println("Name: "+robj.getString("Name"));
    System.out.println("City :"+robj.getString("City"));
    System.out.println("Marks: "+robj.getInt("Marks"));
   }
 
   
  }
}

//  C:\Program Files\Java\jdk-19\JAVA1\bin\server