class short_circuit{
    int printInt(int n);
    public static void main(int k)
    {
        int a = 0 + 2;
        float b = 2.3f;
        a = a + b;
        int arr[][][] = new int [10][500][4];
        arr[6][4+7*8][1] = 2+9*7;

        int arr2[] = new int [6];
        arr2[1] = 1;
        int i = arr2[2]+2;
        printInt(a);
    }
 }