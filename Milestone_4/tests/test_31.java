// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class Test {
    public static void main() {
        //System.out.println(x);
        int arr[][] = new int[2][3];
        arr[0][0] = 1;
        arr[0][1] = 2;
        arr[0][2] = 3;
        arr[1][0] = 4;
        arr[1][1] = 5;
        arr[1][2] = 6;

        System.out.println(arr[0][0]);
        int i = 1; 
        int j = 0;
        System.out.println(arr[i][j]);

        int z = arr[0][1] + arr[1][0]*arr[1][2];

        System.out.println(z);

    }
}