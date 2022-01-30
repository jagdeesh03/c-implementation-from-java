public class Factorial {
    public native long call( a);
    static {
        System.setProperty("java.library.path", "/home/jagadeesh/Documents/");
        System.loadLibrary("World");
    }

    public static void main(String[] args) {
    System.out.println("call to c from java "+" "+new Factorial().call(6));
   }
}
