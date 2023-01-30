



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
       Thread.sleep(500);   // thread la thod thod zopvun run karane ass ka karayach karan 
                    //1] dusari processed run hot asel tar tyala time 10 minut lagat asel tar mazi 
                     //hi thread 10 minut zopavate 
        }
       catch( InterruptedException obj)
       {}
                                                            
     }
   }
}

class ThreadDemo5
{
   public static void main(String A[])
   {
     System.out.println("Inside main method");

     Demo obj1 = new Demo();
     Demo obj2 = new Demo();

    Thread t1 = new Thread(obj1); 
    Thread t2 = new Thread(obj2); 

      t1.setName("First ");
      t2.setName("Second");

    t1.start();
    t2.start();
   }
}