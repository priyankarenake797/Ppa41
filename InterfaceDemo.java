

interface Circle
{
      float PI = 3.14f;
      float Area(float Radius);
      float Circumfarance(float Radius);  // public abstract float Circumfarance(float Radius);
}

class Marvellous implements Circle
{
  public float Area(float Radius)
   {
      return PI * Radius * Radius;    
   }
   public float  Circumfarance(float Radius)
    {
      return 2 * PI * Radius;
    }
}

class InterfaceDemo
{

    public static void main(String arr[])
     {

       System.out.println("Value PI is :"+Circle.PI);   // to demonsrate public and static
      // Circle.PI = 7.12F;  //To demonstrate Final

       Circle cobj = new Marvellous();
        float Ret = 0.0f;
         Ret = cobj.Area(7.12F);
        System.out.println("Area is :"+Ret);

      Ret = cobj.Circumfarance(7.12F);
        System.out.println("Circumfarance is :"+Ret);
     }

}