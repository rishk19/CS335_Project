//function calls
class short_circuit{
    public static void func1(){
        System.out.println(1);
    }
    public static int func2(){
        System.out.println(2);
        int sum = 0;
        for(int i = 0; i<10; i++){
            sum = sum + i;
        }
        return sum;
    }
    public static void func3(int sum, int s){
        System.out.println(sum);
    }
    public static void main(){
        int sum = 0;
        System.out.println(sum);
        func1();
        sum = func2();
        System.out.println(sum);
    }
}
 
 