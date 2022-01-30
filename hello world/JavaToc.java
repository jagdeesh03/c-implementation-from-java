public class JavaToc {
    
    public native void func();

    static {
        System.setProperty("java.library.path", "/home/jagadeesh/Documents/");
        System.loadLibrary("HelloWorld");
    }

    public static void main(String[] args) {
      new JavaToc().func();
}
}      
