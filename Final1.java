            //Same as constant characteristics of class from c++ used final keyword


class Demo
{
   public int No1;
   public final int No2 = 11;  //const int No2; in c++
   pubic  final int No3;       //const int No3;  in c++
  
   public Demo()     //: No2(11),No3(21) in c++
   {
     No1 = 0;  
     No3 = 21;  // not allowed in c++
    
    }


}

class Final1
{
   public static void main(String arr[])
   {
     final int i = 51 // in c++  const int i = 51
     Demo obj = new Demo();
   
     obj.No1++;
     obj.No2++;  // error
      obj.No3++;  //error
  
   

  }
 
}