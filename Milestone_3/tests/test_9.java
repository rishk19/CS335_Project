class mutual_recursion{
    int printInt(int n){
        return 9;
    }
    int even_function(int n){
        int even;
        if (n==0){
            even = 1;
        }
        else{
            even =2*even;
        }
        return even;
    }
    int odd_function(int n){
        int odd = 4, jj;
        int abc;
        int xyz;
        if (n==0){
            odd = 0;
        }
        else{
            odd = even_function(n-1);
        }
        return odd;
    }
    public static void main(){
        printInt(odd_function(15));
    }
}
