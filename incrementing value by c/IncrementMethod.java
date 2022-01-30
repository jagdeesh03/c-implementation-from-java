public class IncrementMethod
{
public native void count(); 
static int a = 101;
static
{
 System.setProperty("java.library.path","/home/jagadeesh/Documents/");
 System.loadLibrary("Calling");
}
static void increment()
{
  a++;
}
public static void main(String[] args)
{
  IncrementMethod pass = new IncrementMethod();
  pass.count();
  System.out.println("Calculated "+pass.a);
}
}
