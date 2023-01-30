



class Demo extends Thread  // only 1 change implements Runnable in ThreadDemo3 file
{
   public void run()
   {
     int i = 0;
     for(i = 1; i <=10; i++)
     {
      System.out.println(Thread.currentThread().getName()+" : "+i);
       
        try
        {  
       Thread.sleep(500);    
        }
       catch( InterruptedException obj)
       {}
                                                            
     }
   }
}

class ThreadDemo8
{
   public static void main(String A[]) throws InterruptedException  // main is parent thrread
   {
     System.out.println("Inside main method");

     Demo obj1 = new Demo();
     Demo obj2 = new Demo();

    Thread t1 = new Thread(obj1); 
    Thread t2 = new Thread(obj2); 

      t1.setName("First ");
      t2.setName("Second");
     System.out.println("priority of t1 is : "+t1.getPriority());
     System.out.println("priority of t2 is : "+t2.getPriority());

    t1.start();   //child thread
    t2.start();  //child thread
  
     t1.join(); //display end of thred running ...("End of main Thread");
     t2.join();
   
     System.out.println("End of main Thread");
   }
}