
// c++ madhe "copy constructor" ahe tar yala option in java "clone()" vaparal jat
// clone dependent program ahe...................................

//*****************************************************************************************************//

class Employee implements Cloneable  //Cloneable ha interface ahe
{
   public int Eid;
   public String Name;
   public int Salary;

   public Employee(int No , String str ,int Value)
   {
      this.Eid = No;
      this.Name = str;;
      this.Salary = Value;
   }
  
  public Object clone() throws CloneNotSupportedException
    {
       return super.clone();    // super. mhana varach parent class ch sagal mkilel 
    }
}


class CloneDemo
    {
        public static void main(String A[])
          {
            try
             {
               Employee eobj1 = new Employee(101 , "Rahul", 1100);
               Employee eobj2 = (Employee)eobj1.clone();  // actual doing clonning

               System.out.println("Name of First Employee :\n"+eobj1.Name);
               System.out.println("Name of second Employee :\n"+eobj2.Name); 

               System.out.println("Salary of First Employee :\n"+eobj1.Salary);
               System.out.println("Salary of second Employee :\n"+eobj2.Salary);

              eobj1.Name = "Sagar";  // deep copy keli yane..... mhanje data copy karane

               System.out.println("Name of First Employee :\n"+eobj1.Name);
               System.out.println("Name of second Employee :\n"+eobj2.Name); 

             }
      catch(CloneNotSupportedException obj)
       {}
      
     } 

}