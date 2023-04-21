class Test {
    
    static int x = 1;
    int y = 2;
    int z =0;
    
    static {
        int yy = 1;
        //System.out.println(" I am inside static block");
    }
    
    /*
    Test(int x,int y, int z){
        this.x = x;
        this.y = y;
        this.z = z;
    }
    */
    
    static public void method_1(){
        //System.out.println("In Method 1");
        //method_2();
        this.x = 1;
    }
    
    public void method_2(){
        //System.out.println(x);
        this.x = 1;
        method_1();
    }
    
    public static void main(String[] args) {
        //Test test = new Test(4,5,6);
        
        //System.out.println(test.x);
        //System.out.println(test.y);
        //System.out.println(yy);
        
        method_1();
        //test.x = 5;
        //test.method_2();
        method_1();
    }
}