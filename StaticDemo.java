
//sequence ne run hoti ka te bagh   //static la swatahun call karata yet n ahi

class StaticDemo
{
   static
    {
    System.out.println("inside static block in class staticdemo which contains main ");
     }

    public StaticDemo()
    {
    System.out.println("inside constructor of static demo");
     }

 
       public static void main(String arg[])
           {
            System.out.println("inside in main ");
            System.out.println("value of staytic No3: "+Demo.No3);   //c++....Demo::no3; 
            System.out.println("value of staytic No4: "+Demo.No4);  //c++....Demo::no4; 
            Demo.Gun();
            Demo obj1 =new Demo();
            Demo obj2 =new Demo();
            obj1.Fun();
           }
 
}

class Demo
{
   public int No1;         // non static characteristics
   
   public int No2;        // non static characteristics
   
   public static int No3;  //static characteristics
   
   public static int No4;  //static characteristics
    
    static  //static block
     {
       System.out.println("Inside non static block");
          No3 =51;
          No4 = 101;      //initialization only static charicteristics

     }
    public Demo  //contructor
     {
       System.out.println("Inside constructor");
        No1 = 11;
        No2 =21;     //initialization only non static charicteristics


     }
   
   public void Fun()  //non static method
   {
     //non static methos can access static as well as non static data
     //we can used this word
     System.out.println("Inside non static method fun");
     System.out.println("value of  No1 :"+this.No1);
     System.out.println("value of  No1 :"+this.No2);
     System.out.println("value of  No1 :"+this.No3);
     System.out.println("value of  No1 :"+this.No4);


     
   }
   
  public static void Gun()   //static method
   {
     System.out.println("Inside static method gun");
    System.out.println("Inside non static method fun");
     
     // error yenar ahe.............................
      //we can't used this word
     //System.out.println("value of  No1 :"+this.No1);  //+this. Not allow
     //System.out.println("value of  No1 :"+No1);      //allow
     //System.out.println("value of  No1 :"+this.No2);// +this. Not allow 
      //System.out.println("value of  No2 :"+No2);    //allow
     //System.out.println("value of  No1 :"+this.No3);
     //System.out.println("value of  No1 :"+this.No4);


   }
   
   
}