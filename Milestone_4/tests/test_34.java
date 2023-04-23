//If else and relational operators 
class short_circuit{
    public static void main(){
        int else_Value = 0;
        int a = 1; int b = 2; int c=3;
        if(a > 0){
            System.out.println(a);
        }
        else{
            System.out.println(else_Value);
        }

        if(b > a){
            System.out.println(b);
        }
        else if(b<a){
            System.out.println(a);
        }
        else{
            System.out.println(else_Value);
        }

        if(a > b || b <c){
            System.out.println(b);
        }
        else{
            System.out.println(else_Value);
        }

    }
}
 
 
