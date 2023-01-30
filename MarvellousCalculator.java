import javax.swing.*;
import java.awt.event.*;

class Calculator extends WindowAdapter implements ActionListener
{  
    public JFrame mainframe;
    public JButton b1,b2,b3,b4;
    public JTextField t1 ,t2;
    public JLable lobj;
    Integer no1,no2;

   public Calculator(int width,int height, String Title)
    {
      mainframe = new JFrame(Title);
      mainframe.setSize(width,height);
      
      mainframe.addWindowListener(this);

      b1 = new JButton("Add");
      b2 = new JButton("Sub");
      b3 = new JButton("Mult");
      b4 = new JButton("Div");

     b1.setBounds(10,280,80,40);   //x,y,w,h
     b2.setBounds(100,280,80,40);
     b3.setBounds(190,280,80,40);
     b4.setBounds(290,280,80,40);

      mainframe.add(b1);  
      mainframe.add(b2); 
      mainframe.add(b3); 
      mainframe.add(b4); 

      t1 = new JTextField();
      t2 = new JTextField();  
      
      t1.setBounds(90,100,90,40);
      t2.setBounds(220,100,100,40);

     mainframe.add(t1); 

     mainframe.add(t2); 

     lobj = new JLable();
     lobj.setBounds(150,25,200,100);
     mainframe.add(lobj);

     b1.addActionListener(this);
     b2.addActionListener(this);
     b3.addActionListener(this);
     b4.addActionListener(this);
     
     mainframe.setLayout(null);
     mainframe.setVisible(true); 
    
}
  
   public void windowClosing(WindowEvent obj)
    {
      System.exit(0);
    }
 
  public void actionPerformed(ActionEvent obj)
   {
     try
     {
       no1 = Integer.parseInt(t1.getText());
       no2 = Integer.parseInt(t2.getText());
      
       if(obj.getSource() == b1)
        {


      }
      else if(obj.getSource() == b2)
       {

       }
    
     else if(obj.getSource() == b3)
       {

       }
     else if(obj.getSource() == b4)
       {

       }
      
     }
    catch(Exception eobj)
    {

    }

   }  
}

class MarvellousCalculator
{
 public static void main(String arg[])
 {
   Calculator mobj = new Calculator(400,400,"Marvellous Calculator");
 }
}

