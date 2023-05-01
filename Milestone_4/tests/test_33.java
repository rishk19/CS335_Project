//Basic operators
class short_circuit{
    public static void main(){
        System.out.println(0);
        
        int a = 0; int b = 1; int c = 100;
        
        System.out.println(c);

        c = 1*2*3*4*5+2+2-2*4/1+2/2;
        
        System.out.println(c);
        c = a + b;
        System.out.println(c);

        boolean p1 = true, p2 = false, p3 = true;
        boolean res = (p1&&p2||p3)&&!p2;
        System.out.println(res);

        int power_of_two = 1;
        int two  = power_of_two << 1;
        int four  = power_of_two << 2;
        int eight  = power_of_two << 3;
        int sixteen  = power_of_two << 4;

        System.out.println(power_of_two, two, four, eight, sixteen);
        

    }
}
 
 
