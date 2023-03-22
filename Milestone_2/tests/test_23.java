class One {
    public void methodOne()
    {
  
        // Some Functionality
    }
}
  
class Two extends One {
  
    public static void main(int args[])
    {
        Two t = new Two();
  
        // Calls the method one
        // of the above class
        t.methodOne();
    }
}